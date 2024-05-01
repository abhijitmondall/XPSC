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
      int count = 0;

      for (int i = 0; i < 5; i++)
      {
         int x;
         cin >> x;
         if (x == 1)
         {
            count++;
         }
      }

      if (count >= 4)
      {
         cout << "YES\n";
      }
      else
      {
         cout << "NO\n";
      }
   }

   return 0;
}