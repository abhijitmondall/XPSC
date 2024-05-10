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
      int cnt = 0, len = s.size();

      for (int i = 1; i < len; i++)
      {
         if (s[i - 1] != s[i] && s[i - 1] > s[i])
         {
            cnt++;
         }
      }

      cout << cnt + 1 << '\n';
   }

   return 0;
}