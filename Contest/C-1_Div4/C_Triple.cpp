#include <bits/stdc++.h>
using namespace std;

int main()
{
   int T;
   cin >> T;

   while (T--)
   {
      int n;
      cin >> n;
      map<int, int> mapList;

      for (int i = 1; i <= n; i++)
      {
         int x;
         cin >> x;
         mapList[x]++;
      }

      int is_it = 0;

      for (auto [key, val] : mapList)
      {
         if (val >= 3)
         {
            is_it = key;
         }
      }

      if (is_it)
      {
         cout << is_it << '\n';
      }
      else
      {
         cout << -1 << '\n';
      }
   }

   return 0;
}