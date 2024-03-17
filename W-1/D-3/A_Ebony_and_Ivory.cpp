#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a, b, c;
   cin >> a >> b >> c;

   bool is_it = false;

   for (int i = 0; i <= 10000; i++)
   {
      for (int j = 0; j <= 10000; j++)
      {
         if (i * a + j * b == c)
         {
            is_it = true;
            break;
         }
      }
   }

   if (is_it)
   {
      cout << "Yes" << '\n';
   }
   else
   {
      cout << "No" << '\n';
   }

   return 0;
}