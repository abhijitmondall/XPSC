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
      int x;
      cin >> x;

      int cnt = 100 - x;

      cout << cnt - (cnt % 10) << '\n';
   }

   return 0;
}