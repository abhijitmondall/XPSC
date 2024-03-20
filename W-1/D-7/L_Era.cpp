#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int T;
   cin >> T;

   while (T--)
   {
      ll n;
      cin >> n;

      vector<ll> v(n);

      for (ll i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      ll idx = 1, ans = 0;
      for (ll i = 0; i < n; i++)
      {
         if (v[i] <= idx)
         {
            idx++;
         }
         else
         {
            ans += (v[i] - idx);
            idx += (v[i] - idx);
            idx++;
         }
      }

      cout << ans << '\n';
   }

   return 0;
}