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
      int n;
      cin >> n;

      vector<ll> v1(n), v2(n);

      for (ll i = 0; i < n; i++)
      {
         cin >> v1[i];
      }
      for (ll i = 0; i < n; i++)
      {
         cin >> v2[i];
      }

      int ans = 0;
      for (ll i = 0; i < n; i++)
      {
         if (v1[i] * 2 >= v2[i] && v2[i] * 2 >= v1[i])
         {
            ans++;
         }
      }
      cout << ans << "\n";
   }

   return 0;
}