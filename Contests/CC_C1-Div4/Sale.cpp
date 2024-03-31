#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   ll T;
   cin >> T;
   while (T--)
   {
      ll n;
      cin >> n;
      vector<ll> v;

      ll mx = INT_MIN;

      for (ll i = 0; i < n; i++)
      {
         ll x;
         cin >> x;
         v.push_back(x);
         mx = max(mx, x);

         if (i > 0 && v[i] == v[0])
         {
            break;
         }
      }

      ll ans = 0;

      for (ll i = 0; i < n; i++)
      {
         if (mx == v[i])
         {
            ans += (2LL * mx);
            break;
         }
         else
         {
            ans += v[i];
         }
      }

      cout << ans << '\n';
   }

   return 0;
}
