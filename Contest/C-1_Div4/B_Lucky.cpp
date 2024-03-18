#include <bits/stdc++.h>
using namespace std;

int main()
{
   int T;
   cin >> T;
   while (T--)
   {
      string str;
      cin >> str;

      if (str.size() < 6)
      {
         cout << "NO" << '\n';
         continue;
      }
      else
      {
         if (str[0] + str[1] + str[2] == str[3] + str[4] + str[5])
         {
            cout << "YES" << '\n';
         }
         else
         {
            cout << "NO" << '\n';
         }
      }
   }

   return 0;
}