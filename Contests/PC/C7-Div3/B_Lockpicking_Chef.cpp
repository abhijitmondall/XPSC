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
      int n, m;
      cin >> n >> m;
      string s1, s2;
      cin >> s1 >> s2;

      long long ans = INT_MAX, l = 0;

      while (l < n)
      {
         if ((n - l) < m)
         {
            break;
         }
         long long cnt = 0, r = l;

         for (int i = 0; i < m; i++)
         {

            int x = s1[r] - '0';
            int y = s2[i] - '0';

            int z = min(10 - abs(x - y), abs(x - y));

            cnt += z;

            r++;
         }

         ans = min(ans, cnt);
         l++;
      }

      cout << ans << "\n";
   }

   return 0;
}