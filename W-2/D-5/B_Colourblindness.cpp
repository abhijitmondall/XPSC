#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int T;
   cin >> T;

   while (T--)
   {
      int n;
      cin >> n;
      char mt[2][n];
      for (int i = 0; i < 2; i++)
      {
         for (int j = 0; j < n; j++)
         {
            cin >> mt[i][j];
         }
      }

      bool is_same = true;

      for (int i = 0; i < n; i++)
      {
         if (mt[0][i] == 'R' && mt[1][i] == 'B' || mt[0][i] == 'B' && mt[1][i] == 'R' || mt[0][i] == 'G' && mt[1][i] == 'R' || mt[0][i] == 'R' && mt[1][i] == 'G')
         {
            is_same = false;
            break;
         }
      }

      if (is_same)
      {
         cout << "YES" << '\n';
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}