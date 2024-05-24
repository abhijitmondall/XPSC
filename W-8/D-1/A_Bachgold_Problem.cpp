#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   if (n % 2 == 0)
   {
      int ans = n / 2;

      cout << ans << '\n';

      for (int i = 0; i < ans; i++)
      {
         cout << 2 << " ";
      }
      cout << '\n';
   }
   else
   {
      int make_even = n - 3;
      int ans = make_even / 2 + 1;

      cout << ans << '\n';

      for (int i = 0; i < make_even / 2; i++)
      {
         cout << 2 << " ";
      }
      cout << 3 << '\n';
   }

   return 0;
}