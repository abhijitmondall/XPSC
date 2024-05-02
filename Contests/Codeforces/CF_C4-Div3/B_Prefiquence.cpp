#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      ll n, m;
      cin >> n >> m;

      string s1, s2;
      cin >> s1 >> s2;

      ll l = 0, r = 0, cnt = 0;

      while (l < n)
      {
         if (s1[l] == s2[r])
         {
            cnt++;
            l++;
            r++;
         }
         else
         {
            while (r < m && s1[l] != s2[r])
            {
               r++;
            }
            if (s1[l] != s2[r])
            {
               l++;
            }
         }
      }

      cout << cnt << "\n";
   }

   return 0;
}