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
      int x, y, z;
      cin >> x >> y >> z;

      int time = x * y;
      int cost = z * 24 * 60;

      if (time <= cost)
      {
         cout << "YES" << '\n';
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}