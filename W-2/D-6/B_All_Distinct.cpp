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

      map<int, int> mapList;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         mapList[x]++;
      }

      int count = 0, del = 0;

      for (auto [key, val] : mapList)
      {

         while (mapList[key] > 2)
         {
            mapList[key] -= 2;
         }
      }

      for (auto [key, val] : mapList)
      {
         if (val < 1)
         {
            count++;
         }
      }

      cout << del << " " << count << "\n";
   }

   return 0;
}