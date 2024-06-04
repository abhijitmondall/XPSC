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
      map<char, int> mapList;

      for (int i = 0; i < n; i++)
      {
         char c;
         cin >> c;
         mapList[c]++;
      }

      int need = 0;

      for (auto [key, val] : mapList)
      {
         if (val < m)
         {
            need += (m - val);
         }
      }

      int len = mapList.size();

      int remain = abs(7 * m - len * m);

      cout << need + remain << '\n';
   }

   return 0;
}