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

      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }
      sort(v.begin(), v.end());

      int ans = 0;

      for (int i = 0; i < n - 1; i++)
      {
         if (v[i] < 0 && v[i + 1] < 0)
         {
            v[i] = -v[i];
            v[i + 1] = -v[i + 1];
            ans += v[i];
            ans += v[i + 1];
         }
         else
         {
            ans += v[i];
         }
      }

      cout << ans << "\n";
   }
   return 0;
}