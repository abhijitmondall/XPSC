#include <bits/stdc++.h>
using namespace std;

#define ll long long

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

      ll cnt = 0, l = 0;

      while (l < s1.length())
      {
         ll r = 0;
         while (r <= s2.length())
         {
            string str = s1.substr(l, r);
            if (s2.find(str) != string::npos)
            {
               cnt = max(cnt, (ll)str.length());
            }

            r++;
         }

         l++;
      }

      cout << (s1.length() + s2.length()) - 2 * cnt << "\n";
   }

   return 0;
}