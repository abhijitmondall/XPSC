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

      for (ll i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      sort(v.begin(), v.end());

      ll mx = v[n - 1], mn = v[0];

      for (ll i = 0; i < n; i++)
      {
         ll tmp = v[i] + k;

         while (tmp <= mx)
         {
            tmp += k;
         }

         v[i] = (tmp - k);
      }

      sort(v.begin(), v.end());

      ll temp = v[n - 1] - v[0];

      ll ans = temp;

      if (temp != 0)
      {
         ll mod = (k % temp);
         ans -= mod;
      }

      cout << ans << "\n";
   }

   return 0;
}