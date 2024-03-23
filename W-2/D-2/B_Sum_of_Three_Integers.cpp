#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int K, S;
   cin >> K >> S;

   int count = 0, x = 0;
   while (x <= K)
   {
      int y = 0;
      while (y <= K)
      {
         int z = S - x - y;
         if (z >= 0 && z <= K)
         {
            if (x + y + z == S)
            {
               count++;
            }
         }
         y++;
      }
      x++;
   }

   cout << count << '\n';

   return 0;
}