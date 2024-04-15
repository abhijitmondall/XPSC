#include <bits/stdc++.h>
using namespace std;

int main()
{
   int T;
   cin >> T;

   while (T--)
   {
      int n, s;
      cin >> n >> s;

      vector<int> v;

      int sum = 0;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         v.push_back(x);
         sum += x;
      }

      int count = 0;

      for (int i = 0; i < n; i++)
      {
         if (count == sum - s || i == n - i)
         {
            break;
         }
         if (v[i] == 0 && v[n - i] == 0)
         {
            count++;
         }
         else if (v[i] == 0 || v[n - i] == 1)
         {
            count++;
         }
         else if (v[i] == 1 && v[n - i] == 1)
         {
            count++;
         }
         else if (v[i] == 1 || v[n - i] == 0)
         {
            count++;
         }
      }
      if (sum < s)
      {
         cout << -1 << '\n';
      }
      else
      {
         cout << count << '\n';
      }
   }
   return 0;
}