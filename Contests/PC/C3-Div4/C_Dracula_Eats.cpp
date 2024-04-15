#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int val = n - 2;
      if (n < 2)
      {
         cout << 0 << '\n';
      }
      else
      {
         cout << val / 7 + 1 << '\n';
      }
   }
   return 0;
}