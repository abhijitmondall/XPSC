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

      int icon2 = ceil(1.0 * y * 0.5);

      int total = ceil(1.0 * (x + y * 4) / 15);

      int ans = max(icon2, total);

      cout << ans << "\n";
   }

   return 0;
}