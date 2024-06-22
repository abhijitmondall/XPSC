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
      int ans = 0, val = 0, i = 2, l = 1;
      while (l <= n)
      {
         int v = n / i;

         l = val * i;
         if (v >= val)
         {
            val = v;
            ans = i;
         }
         i++;
      }

      cout << ans << "\n";
   }

   return 0;
}