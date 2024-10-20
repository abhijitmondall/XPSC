#include <bits/stdc++.h>
using namespace std;

int countPairs(int count)
{
   return count * (count - 1) / 2;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;
   while (tc--)
   {
      int n;
      cin >> n;
      map<int, int> ml;
      int cnt = 0;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         if (x == 0)
         {
            cnt++;
         }
         else
         {
            ml[x]++;
         }
      }

      int totalPairs = 0;
      for (auto [key, val] : ml)
      {
         if (val > 1)
         {
            totalPairs += countPairs(val);
         }
      }

      int mx = 0;
      for (auto [key, val] : ml)
      {
         mx = max(mx, val);
      }

      if (cnt > 0)
      {
         int newMx = mx + cnt;
         totalPairs += countPairs(newMx) - countPairs(mx);
      }

      cout << totalPairs << "\n";
   }

   return 0;
}
