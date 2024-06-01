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

      vector<int> v;
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         sum += x;
         v.push_back(x);
      }

      if (sum % 2 == 0)
      {
         cout << n << '\n';
         continue;
      }

      int l = 0, ans = INT_MIN;

      for (int i = 0; i < n; i++)
      {
         int sum = 0;
         for (int j = i; j < n; j++)
         {
            sum += v[j];
            if (sum % 2 == 0)
            {
               ans = max(ans, j - i + 1);
            }
         }
      }
      if (ans == INT_MIN)
      {
         cout << 0 << '\n';
         continue;
      }
      cout << ans << '\n';
   }
   return 0;
}