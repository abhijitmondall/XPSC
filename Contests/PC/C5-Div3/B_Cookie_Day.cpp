#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      ll n, k;
      cin >> n >> k;

      vector<ll> v(n);

      ll mx = INT_MIN;
      for (ll i = 0; i < n; i++)
      {
         cin >> v[i];

         if (mx < v[i])
         {
            mx = v[i];
         }
      }

      if (mx < k)
      {
         cout << -1 << '\n';
         continue;
      }

      ll ans = k;

      for (ll i = 0; i < n; i++)
      {
         if (v[i] >= k)
         {
            ll coks = v[i] % k;

            if (ans > coks)
            {
               ans = coks;
            }
         }
      }

      cout << ans << '\n';
   }

   return 0;
}