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
      int n;
      cin >> n;
      string s;
      cin >> s;

      for (int i = 0; i < n; i++)
      {
         char ch;
         if (i + 2 < n && s[i + 2] == '0' && (s[i + 3] != '0'))
         {
            int cd = 'a' + ((s[i] - '0') * 10 + (s[i + 1] - '0'));
            ch = (cd - 1);
            i += 2;
         }
         else
         {
            int cd = 'a' + (s[i] - '0');
            ch = (cd - 1);
         }

         cout << ch;
      }

      cout << '\n';
   }

   return 0;
}