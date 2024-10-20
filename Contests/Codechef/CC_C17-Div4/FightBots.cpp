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
      int n, x, y;
      cin >> n >> x >> y;

      string s;
      cin >> s;

      int p1 = 0, p2 = 0, i = n;

      while (i--)
      {
         if (s[i] == 'R')
         {
            p1++;
         }
         else if (s[i] == 'L')
         {
            p1--;
         }
         else if (s[i] == 'U')
         {
            p2++;
         }
         else if (s[i] == 'D')
         {
            p2--;
         }
      }

      while (n--)
      {
         if (x > p1)
         {
            x--;
         }
         else if (x < p1)
         {
            x++;
         }
         else if (y > p2)
         {
            y--;
         }
         else if (y < p2)
         {
            y++;
         }
         else
         {
            x++;
         }
      }

      if (x == p1 && y == p2)
      {
         cout << "Yes\n";
      }
      else
      {
         cout << "No\n";
      }
   }

   return 0;
}