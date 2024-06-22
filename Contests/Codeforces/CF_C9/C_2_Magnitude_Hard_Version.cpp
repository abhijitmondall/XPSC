#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

      vector<ll> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      ll sum1 = 0, sum2 = 0, cnt = 0;

      for (int i = 0; i < n; i++)
      {
         ll val = sum1 + v[i];
         if (v[i] < 0)
         {
            cnt++;
         }
         sum1 = abs(val);
         sum1 = max(sum1, abs(sum2));

         sum2 += v[i];
      }

      if (cnt > 1 && cnt != n)
      {
         ll result = cnt * cnt * sum1;
         cout << result % 998244353 << '\n';
         continue;
      }

      ll ans = pow(2, n - cnt);

      cout << ans % 998244353 << '\n';
   }

   return 0;
}