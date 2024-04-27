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

      int ans = 0;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;

         ans |= x;
      }

      cout << ans << '\n';
   }

   return 0;
}