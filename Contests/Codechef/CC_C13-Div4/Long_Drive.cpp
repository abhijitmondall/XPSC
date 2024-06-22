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

      int ans = ceil(10 * 1.0 * (x - y) / (y - 100));

      cout << abs(ans) << endl;
   }

   return 0;
}