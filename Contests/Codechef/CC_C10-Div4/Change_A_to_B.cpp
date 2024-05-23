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
      ll x, y, k;
      cin >> x >> y >> k;

      ll cnt = 0;

      while (y > x)
      {
         if (y % k == 0 && y >= k * x)
         {
            y /= k;
         }
         else
         {
            y--;
         }
         cnt++;
      }

      cout << cnt << '\n';
   }

   return 0;
}
