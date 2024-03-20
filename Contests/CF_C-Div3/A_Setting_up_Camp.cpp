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
      long long int totals = 0, temp = 0;
      for (int i = 0; i < 3; i++)
      {
         long long int x;
         cin >> x;

         if (i == 0)
         {
            totals += x;
         }
         if (i == 1)
         {
            if (x % 3 == 0)
            {
               totals += x / 3;
            }
            else if (x < 3)
            {
               temp = x;
            }
            else
            {
               temp = x % 3;
            }
         }

         if (i == 2)
         {
            if (temp)
            {
               long long int t = temp + x;

               if (t < 3)
               {
                  totals = -1;
               }
               else
               {
                  totals += t / 3 + t % 3;
                  if (t % 3 == 2)
                  {
                     totals--;
                  }
               }
            }
            else
            {
               if (x >= 3)
               {
                  totals += x / 3 + x % 3;
                  if (x % 3 == 2)
                  {
                     totals++;
                  }
               }
               else if (x == 1)
               {
                  totals += 1;
               }
            }
         }
      }

      cout << totals << endl;
   }

   return 0;
}