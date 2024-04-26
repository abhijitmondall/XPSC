#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

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

      ll count = 0;

      for (ll i = 0; i < n; i++)
      {
         ll x = v[i];

         if (i == 0)
         {
            count = (count + x) % MOD;
         }
         else if (x == 1 || count == 1)
         {
            count = (count + x) % MOD;
         }
         else
         {
            count = (count * x) % MOD;
         }
      }

      cout << count << "\n";
   }

   return 0;
}