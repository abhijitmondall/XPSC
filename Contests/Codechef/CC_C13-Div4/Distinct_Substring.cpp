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
      int n, k;
      cin >> n >> k;

      int sum = 0;

      for (int i = 1; i <= k; i++)
      {
         sum += i;
      }

      sum += (k - 1);

      if (sum <= n)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}