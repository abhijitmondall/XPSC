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

      long long ans = 1;

      while (ans < n)
      {
         ans *= 2;
      }

      long long dl = ans - n;

      if (dl != 0)
      {
         cout << n - dl << endl;
      }
      else
      {
         cout << 0 << endl;
      }
   }
   return 0;
}