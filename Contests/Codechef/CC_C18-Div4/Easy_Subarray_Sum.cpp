#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll t;
   cin >> t;
   while (t--)
   {
      ll n;
      cin >> n;

      ll neg = 0, pos = 0, zero = 0;

      for (ll i = 0; i < n; i++)
      {
         ll x;
         cin >> x;
         if (x < 0)
         {
            neg++;
         }
         else if (x > 0)
         {
            pos++;
         }
         else if (x == 0)
         {
            zero++;
         }
      }

      if (pos == 0 || zero == n || neg == n)
      {
         cout << 0 << endl;
      }
      else
      {
         cout << neg << endl;
      }
   }

   return 0;
}
