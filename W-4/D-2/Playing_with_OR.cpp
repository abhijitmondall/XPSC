#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll tc;
   cin >> tc;

   while (tc--)
   {
      ll n, k;
      cin >> n >> k;

      ll a[n];
      for (ll i = 0; i < n; i++)
      {
         cin >> a[i];
      }

      ll l = 0, r = k - 1, count = 0;

      while (l <= n - k)
      {
         ll OR = a[l];

         for (ll j = l + 1; j <= r; j++)
         {
            OR |= a[j];
         }

         if (OR % 2 != 0)
         {
            count++;
         }

         l++;
         r++;
      }

      cout << count << "\n";
   }

   return 0;
}