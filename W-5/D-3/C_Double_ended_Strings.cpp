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
      string s1, s2;
      cin >> s1 >> s2;

      int cnt = 0, l = 0;

      while (l < s1.length())
      {
         int r = 0, tmp1 = 0, tmp2 = 0;
         while (r < s2.length() && l < s1.length())
         {

            if (s1[l] == s2[r])
            {
               tmp2 += 2;
               l++;
               r++;
            }
            else
            {
               tmp1 = max(tmp1, tmp2);
               r++;
               tmp2 = 0;
            }
         }

         cnt = max(cnt, tmp1);
         l++;
      }

      // cout << cnt << endl;

      cout << (s1.length() + s2.length()) - cnt << "\n";
   }
   return 0;
}