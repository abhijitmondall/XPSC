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
      int h, x, y;
      cin >> h >> x >> y;
      int remain_h = h - y;
      int attacks = ceil(1.0 * remain_h / x) + 1;

      cout << attacks << endl;
   }

   return 0;
}