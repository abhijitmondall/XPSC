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
      int p, c;
      cin >> p >> c;

      if (p <= c)
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