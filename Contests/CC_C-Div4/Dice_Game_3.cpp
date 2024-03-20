#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int T;
   cin >> T;
   while (T--)
   {
      int x;
      cin >> x;

      if (x == 1)
      {
         cout << 6 << '\n';
      }
      else
      {
         cout << x * (1 + 2 * 6) / 2 << '\n';
      }
   }

   return 0;
}