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
      ll n, m;
      cin >> n >> m;

      ll ans = 0;

      for (ll i = 0; i < n; i++)
      {
         ll x;
         cin >> x;

         ans += max(m - x, x - 1);
      }

      cout << ans << "\n";
   }

   return 0;
}