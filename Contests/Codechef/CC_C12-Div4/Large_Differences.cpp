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

      vector<int> v(n);

      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      int sum = 0;
      for (int i = 0; i < n - 1; i++)
      {
         sum += abs(v[i] - v[i + 1]);
      }

      int ans = sum;

      for (int i = 0; i < n; i++)
      {
         int op1 = sum, op2 = sum;

         if (i > 0)
         {
            op1 -= abs(v[i] - v[i - 1]);
            op1 += abs(v[i - 1] - 1);

            op2 -= abs(v[i] - v[i - 1]);
            op2 += abs(v[i - 1] - k);
         }

         if (i < n - 1)
         {
            op1 -= abs(v[i] - v[i + 1]);
            op1 += abs(v[i + 1] - 1);

            op2 -= abs(v[i] - v[i + 1]);
            op2 += abs(v[i + 1] - k);
         }

         ans = max(ans, op1);
         ans = max(ans, op2);
      }

      cout << ans << "\n";
   }
   return 0;
}