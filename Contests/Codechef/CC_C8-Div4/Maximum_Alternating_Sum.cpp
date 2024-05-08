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
      ll n;
      cin >> n;
      vector<ll> v(n);
      for (ll i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      sort(v.begin(), v.end());
      int ln = n / 2;

      ll ans = 0;

      for (ll i = n - 1; i >= 0; i--)
      {
         if (i < ln)
         {
            ans += v[i];
         }
         else
         {
            ans -= v[i];
         }
      }
      cout << abs(ans) << "\n";
   }

   return 0;
}