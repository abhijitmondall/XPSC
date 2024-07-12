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

      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      int sum = 0, cnt = 0;

      for (int i = 0; i < n; i++)
      {
         int orr = (sum | v[i]);
         sum += orr;

         int mod = sum % 2;
         int remain = sum - mod;
         int x = remain / 2;

         int num = pow(2, x);
         if (sum != num)
         {
            sum -= orr;
            cnt++;
         }
      }

      cout << cnt << "\n";
   }
   return 0;
}