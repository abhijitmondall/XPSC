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
      int n, k, l;

      cin >> n >> k >> l;

      vector<vector<int>> v(6);

      for (int i = 0; i < n; i++)
      {
         int a, b;
         cin >> a >> b;
         v[b].push_back(a);
      }

      if (v[l].empty() || v[l].size() < k || k == 0 || n < k)
      {
         cout << -1 << '\n';
         continue;
      }

      sort(v[l].begin(), v[l].end(), greater<int>());
      long long len = 0;
      for (int i = 0; i < k; i++)
      {
         len += v[l][i];
      }

      cout << len << '\n';
   }

   return 0;
}