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

      ll sum1 = 0, sum2 = 0;

      for (int i = 0; i < n; i++)
      {

         ll val = sum1 + v[i];
         sum1 = abs(val);
         sum2 += v[i];
         sum1 = max(sum1, abs(sum2));
      }

      ll sum3 = abs(sum2);
      ll ans = max(sum1, sum3);

      cout << ans << endl;
   }

   return 0;
}