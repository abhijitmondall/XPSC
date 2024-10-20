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
      int n, x;
      cin >> n >> x;

      int ans = 0;

      for (int i = n; i > n - x; i--)
      {
         ans += pow(2, i);
      }

      for (int i = n - x; i > 0; i--)
      {
         ans -= pow(2, i);
      }

      cout << ans << "\n";
   }
   return 0;
}