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
      int n;
      cin >> n;

      map<int, int> mapList;
      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         mapList[__lg(x)]++;
      }

      long long count = 0;

      for (auto [_, n] : mapList)
      {
         count += 1LL * n * (n - 1) / 2;
      }

      cout << count << '\n';
   }

   return 0;
}