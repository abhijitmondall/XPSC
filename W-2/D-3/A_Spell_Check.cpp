#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int T;
   cin >> T;
   string nm = "Timur";
   sort(nm.begin(), nm.end());

   while (T--)
   {
      int n;
      cin >> n;
      string str;
      cin >> str;

      if (n < 5 || n > 5)
      {
         cout << "NO" << '\n';
      }
      else
      {
         sort(str.begin(), str.end());

         if (str == nm)
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