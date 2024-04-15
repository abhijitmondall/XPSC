#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      sort(v.begin(), v.end());

      int count = 0;

      for (int i = 0; i < n; i++)
      {
         if (v[i] <= i)
         {
            count += i - v[i];
         }
         else
         {
            count += v[i] - i;
         }
      }

      cout << count << "\n";
   }

   return 0;
}