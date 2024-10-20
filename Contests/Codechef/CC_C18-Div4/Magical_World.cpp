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
      int a, b, x;
      cin >> a >> b >> x;

      int ml = x * x;

      if (ml >= a * b)
      {
         cout << 0 << endl;
         continue;
      }

      if (ml >= a * 1 || ml >= b * 1)
      {
         cout << 1 << endl;
      }
      else
      {
         cout << 2 << endl;
      }
   }

   return 0;
}