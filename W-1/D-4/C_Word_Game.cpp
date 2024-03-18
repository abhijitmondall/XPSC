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
      string mt[3][n];
      map<string, int> mapList;

      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < n; j++)
         {
            mt[i][j] = -1;
         }
      }

      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < n; j++)
         {
            string str;
            cin >> str;
            mt[i][j] = str;
            mapList[str]++;
         }
      }

      for (int i = 0; i < 3; i++)
      {
         int count = 0;
         for (int j = 0; j < n; j++)
         {

            if (mapList[mt[i][j]] == 1)
            {
               count += 3;
            }
            if (mapList[mt[i][j]] == 2)
            {
               count += 1;
            }
            if (mapList[mt[i][j]] == 3)
            {
               count += 0;
            }
         }

         cout << count << " ";
      }

      cout << '\n';
   }

   return 0;
}