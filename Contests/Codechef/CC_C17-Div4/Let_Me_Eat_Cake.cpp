#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;

   while (t--)
   {
      int x, y;
      cin >> x >> y;

      int ans = 0;
      while (x != y)
      {
         if (x > y)
         {
            int v = ceil(x * 1.0 / 2);
            ans += v;
            x -= v;
         }
         else
         {
            int v = ceil(y * 1.0 / 2);
            ans += v;
            y -= v;
         }
      }

      cout << ans << endl;
   }
   return 0;
}