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
      int n;
      cin >> n;
      string s;
      cin >> s;
      int i = 0;

      while (i < n - 2)
      {
         if (s[i + 1] > '0')
         {
            s[i + 1] = '0';
         }
         if (s[i + 2] > '0')
         {
            s[i + 2] = '0';
         }

         i += 3;
      }

      cout << s << '\n';
   }

   return 0;
}