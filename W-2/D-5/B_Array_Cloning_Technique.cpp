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

      int count = INT_MIN;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         mapList[x]++;
         count = max(count, mapList[x]);
      }

      if (count == n)
      {
         cout << 0 << '\n';
      }
      else
      {
         int el = 1;

         while (count <= n)
         {
            if ((count * 2) >= n)
            {
               el += (n - count);
               break;
            }

            el += count;
            count *= 2;
            el++;
         }

         cout << el << '\n';
      }
   }

   return 0;
}