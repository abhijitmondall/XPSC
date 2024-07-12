#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

      ll mt[n][m];
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            cin >> mt[i][j];
         }
      }

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            int ti = i - 1;
            int di = i + 1;
            int lj = j - 1;
            int rj = j + 1;

            ll tv = 0, dv = 0, lv = 0, rv = 0, mx1 = 0, mx2 = 0, mx3 = 0;

            if (ti >= 0 && ti < n)
            {
               tv = mt[ti][j];
            }
            if (di >= 0 && di < n)
            {
               dv = mt[di][j];
            }

            mx1 = max(tv, dv);

            if (lj >= 0 && lj < m)
            {
               lv = mt[i][lj];
            }
            if (rj >= 0 && rj < m)
            {
               rv = mt[i][rj];
            }

            mx3 = max(mx1, mx2);

            ll val = mt[i][j];

            if (val > mx3)
            {
               mt[i][j] = mx3;
            }

            // cout << mt[i][j] << " ";
         }
         cout << '\n';
      }

      cout << '\n';
   }

   return 0;
}