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
      ll n, m;
      cin >> n >> m;

      vector<ll> batsmen, bowlers;

      for (ll i = 0; i < n; i++)
      {
         ll x;
         cin >> x;
         batsmen.push_back(x);
      }

      for (ll i = 0; i < m; i++)
      {
         ll x;
         cin >> x;
         bowlers.push_back(x);
      }

      if (n < 4 || m < 4 || (n + m) < 11)
      {
         cout << -1 << '\n';
         continue;
      }

      sort(batsmen.begin(), batsmen.end(), greater<ll>());
      sort(bowlers.begin(), bowlers.end(), greater<ll>());

      ll ans = 0;

      for (ll i = 0; i < 4; i++)
      {
         ans += batsmen[i];
         ans += bowlers[i];
      }

      vector<ll> v;

      for (ll i = 4; i < n; i++)
      {
         v.push_back(batsmen[i]);
      }
      for (ll i = 4; i < m; i++)
      {
         v.push_back(bowlers[i]);
      }

      sort(v.begin(), v.end(), greater<ll>());

      for (ll i = 0; i < 3; i++)
      {
         ans += v[i];
      }

      cout << ans << '\n';
   }

   return 0;
}