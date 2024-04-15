#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;

   while (t--)
   {
      ll n, k;
      cin >> n >> k;
      vector<ll> v(n);

      ll sum = 0;

      for (ll i = 0; i < n; i++)
      {
         cin >> v[i];
         sum += v[i];
      }

      if (k >= sum)
      {
         cout << n << '\n';
         continue;
      }

      ll count = 0;
      ll i = 0, j = n - 1;

      for (ll l = 0; l < k; l++)
      {

         if (j < 1 && v[j] == 1)
         {
            count++;
            break;
         }

         if (i == j && v[i] == 1)
         {
            count++;
            break;
         }

         if (l % 2 == 0)
         {
            if (v[i] != 0)
            {
               v[i]--;
            }

            if (v[i] == 0)
            {
               count++;

               i++;
            }
         }
         else
         {
            if (v[j] != 0)
            {
               v[j]--;
            }

            if (v[j] == 0)
            {
               count++;

               j--;
            }
         }
      }

      cout << count << '\n';
   }

   return 0;
}