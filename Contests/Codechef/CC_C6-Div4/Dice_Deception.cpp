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

      ll count = 0;

      for (ll i = 0; i < n; i++)
      {
         ll x = v[i];
         if (x < 4 && k > 0)
         {
            if (x == 1)
            {
               count += 6;
            }
            else if (x == 2)
            {
               count += 5;
            }
            else if (x == 3)
            {
               count += 4;
            }

            k--;
         }
         else
         {
            count += x;
         }
      }

      cout << count << "\n";
   }

   return 0;
}