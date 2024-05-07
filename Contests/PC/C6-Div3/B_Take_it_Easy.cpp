#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;
   while (tc--)
   {
      int n;
      cin >> n;

      int sum = 0;

      vector<int> v;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         v.push_back(x);
         sum += x;
      }

      int l = 1, target = sum / n, count = 0;

      if (target % n != 0)
      {
         cout << "No" << '\n';
         continue;
      }

      for (auto val : v)
      {
         if (val > target)
         {
            count += (val - target);
         }
         if (val < target)
         {
            count -= (target - val);
         }
      }

      if (count)
      {
         cout << "No" << '\n';
      }
      else
      {
         cout << "Yes" << '\n';
      }
   }

   return 0;
}