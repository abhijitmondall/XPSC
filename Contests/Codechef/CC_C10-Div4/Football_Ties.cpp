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

      if (x < 3 && y < 3)
      {
         cout << min(x, y) << endl;
         continue;
      }

      int ans = min(x, y);

      cout << ans % 3 << endl;
   }

   return 0;
}