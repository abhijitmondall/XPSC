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

      vector<ll> v2;

      ll ans = INT_MAX;

      for (int i = 0; i < n - 1; i++)
      {
         ll mx = v[i];

         for (int j = i + 1; j < n; j++)
         {
            mx = max(mx, v[j]);
            ans = min(ans, mx);
         }
      }

      cout << ans - 1 << "\n";
   }

   return 0;
}