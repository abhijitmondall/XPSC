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
      int n;
      cin >> n;
      for (int i = 0; i < n * 2; i++)
      {
         if (i + 2 % 2 == 0)
         {
            for (int j = 0; j < n * 2; j++)
            {
               cout << ".";
            }
         }
         else
         {
            for (int j = 0; j < n * 2; j++)
            {

               cout << "#";
            }
         }

         cout << '\n';
      }
   }
   return 0;
}