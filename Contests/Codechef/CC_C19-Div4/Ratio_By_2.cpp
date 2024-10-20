#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      int x, y;
      cin >> x >> y;

      int ans = 0;
      if (x > y)
      {
         swap(x, y);
      }

      if (y >= 2 * x)
      {
         cout << ans << '\n';
         continue;
      }
      else
      {
         ans = ceil((2.0 * x - y) / 2.0);
      }

      cout << ans << '\n';
   }
   return 0;
}