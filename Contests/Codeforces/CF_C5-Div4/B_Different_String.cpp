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
      string s;
      cin >> s;
      int len = s.size();
      bool possible = false;
      char c = s[0];
      for (int i = 1; i < len; i++)
      {
         if (s[i] != c)
         {
            possible = true;
            char temp = s[i];
            s[i] = c;
            s[0] = temp;
            break;
         }
      }

      if (possible)
      {
         cout << "YES" << '\n';
         cout << s << "\n";
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}