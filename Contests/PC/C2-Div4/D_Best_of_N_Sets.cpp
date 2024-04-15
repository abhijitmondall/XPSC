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
      int X, Y;

      cin >> X >> Y;

      int sum, count = 0;
      sum = X + Y;
      if (sum % 2 == 0)
      {
         if (X < Y)
         {
            while (X < Y - 1)
            {
               count++;
               X++;
            }
         }
         else
         {
            while (X - 1 > Y)
            {
               count++;
               Y++;
            }
         }
      }
      else
      {
         if (X < Y)
         {
            while (X < Y - 1)
            {
               count += 2;
               X += 2;
            }
         }
         else
         {
            while (X - 1 > Y)
            {
               count += 2;
               Y += 2;
            }
         }
      }

      cout << count + sum << "\n";
   }

   return 0;
}