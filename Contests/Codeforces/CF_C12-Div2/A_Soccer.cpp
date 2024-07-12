#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      ll x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;

      ll d1 = x1 - x2;
      ll d2 = y1 - y2;

      if ((d2 + x1) != y1 || (d2 + x1) != y2 || (d1 + y1) != x1 || (d1 + y1) != x2)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }

   return 0;
}