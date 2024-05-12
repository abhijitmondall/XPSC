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
      int l, v1, v2;
      cin >> l >> v1 >> v2;

      int s1 = ceil(1.0 * l / v1);
      int s2 = ceil(1.0 * l / v2);

      if (s1 <= s2)
      {
         cout << -1 << '\n';
         continue;
      }

      cout << s1 - s2 - 1 << '\n';
   }

   return 0;
}