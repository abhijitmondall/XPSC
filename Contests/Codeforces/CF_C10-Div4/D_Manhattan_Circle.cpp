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

      char mt[n][m];

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < m; j++)
         {
            cin >> mt[i][j];
         }
      }

      int xDot = 0, xHash = 0;
      int yDot = 0, yHash = 0;

      for (int i = 0; i < n; i++)
      {
         int hash = 0;
         for (int j = 0; j < m; j++)
         {
            if (mt[i][j] == '#')
            {
               hash++;
            }
         }

         xHash = max(xHash, hash);
      }

      for (int i = 0; i < n; i++)
      {
         int hash = 0, dot = 0;
         bool found = false;
         for (int j = 0; j < m; j++)
         {
            if (mt[i][j] == '.' && !found)
            {
               dot++;
            }
            if (mt[i][j] == '#')
            {
               hash++;
               found = true;
            }
         }

         if (hash == xHash)
         {
            xDot = max(xDot, dot);
         }
      }

      for (int i = 0; i < m; i++)
      {
         int hash = 0;
         for (int j = 0; j < n; j++)
         {
            if (mt[j][i] == '#')
            {
               hash++;
            }
         }

         yHash = max(yHash, hash);
      }

      for (int i = 0; i < m; i++)
      {
         int hash = 0, dot = 0;
         bool found = false;
         for (int j = 0; j < n; j++)
         {
            if (mt[j][i] == '.' && !found)
            {
               dot++;
            }
            if (mt[j][i] == '#')
            {
               hash++;
               found = true;
            }
         }

         if (hash == yHash)
         {
            yDot = max(yDot, dot);
         }
      }

      int x = xHash / 2;
      int y = yHash / 2;

      cout << yDot + y + 1 << " " << xDot + x + 1 << '\n';
   }

   return 0;
}