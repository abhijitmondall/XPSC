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

      vector<pair<int, int>> v;

      for (int i = 0; i < n; i++)
      {
         int a, b;
         cin >> a >> b;
         v.push_back({a, b});
      }

      int ans = INT_MIN;

      for (int i = 0; i < n - 1; i++)
      {
         for (int j = i + 1; j < n; j++)
         {
            int op1 = v[i].first * v[j].second + v[i].second * v[j].first;
            int op2 = v[i].second * v[j].first + v[i].first * v[j].second;
            int val = max(op1, op2);
            ans = max(ans, val);
         }
      }

      cout << ans << "\n";
   }

   return 0;
}