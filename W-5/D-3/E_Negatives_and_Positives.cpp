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

      ll mn = INT_MAX, ans = 0, negVal = 0;
      for (ll i = 0; i < n; i++)
      {
         ll x;
         cin >> x;
         if (x < 0)
         {
            negVal++;
         }
         ans += abs(x);
         mn = min(mn, abs(x));
      }

      if (negVal % 2 != 0)
      {
         ans -= 2 * mn;
      }

      cout << ans << "\n";
   }

   return 0;
}