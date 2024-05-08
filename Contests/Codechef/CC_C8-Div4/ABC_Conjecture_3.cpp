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

      int l = 0, cnt = 0;

      while (l < n)
      {
         if (s[l] == 'a')
         {
            int r = l + 1;

            while (r < n)
            {
               if (s[r] == 'b')
               {
                  if (s[r] == 'c')
                  {
                     cnt++;
                     s.erase(s.begin() + r);
                  }
               }

               r++;
            }
         }
         else
         {
            l++;
         }
      }

      cout << cnt << endl;
   }

   return 0;
}