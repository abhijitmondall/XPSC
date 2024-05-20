#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      ll n;
      cin >> n;

      vector<ll> v(n);

      for (ll i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      vector<vector<ll>> v2(n - 2);

      for (ll i = 0; i < n - 2; i++)
      {
         for (ll j = i; j < 3 + i; j++)
         {
            v2[i].push_back(v[j]);
         }
      }

      ll ans = 0;

      for (ll i = 0; i < v2.size() - 1; i++)
      {

         for (ll j = i + 1; j < v2.size(); j++)
         {

            ll cnt = 0, cnt2 = 0;
            for (ll k = 0; k < 3; k++)
            {
               if (v2[i][k] != v2[j][k])
               {
                  cnt++;
               }
               else
               {
                  cnt2++;
               }
            }

            if (cnt == 1 && cnt2 >= 2)
            {
               ans++;
            }
         }
      }

      cout << ans << "\n";
   }
   return 0;
}