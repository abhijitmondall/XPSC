#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   while (n--)
   {
      int x, y, z;
      cin >> x >> y >> z;

      vector<int> v(3);
      v[0] = x;
      v[1] = y;
      v[2] = z;

      int ans = INT_MAX;

      for (int i = 0; i < 3; i++)
      {
         int sum = 0;
         for (int j = 0; j < 3; j++)
         {
            int val = abs(v[j] - v[i]);
            sum += val;
         }

         ans = min(ans, sum);
      }

      cout << ans << "\n";
   }

   return 0;
}