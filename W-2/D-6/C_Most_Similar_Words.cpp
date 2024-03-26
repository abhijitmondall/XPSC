#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int T;
   cin >> T;

   while (T--)
   {
      int n, m;
      cin >> n >> m;

      vector<int> v;

      for (int i = 0; i < n; i++)
      {
         string s;
         cin >> s;

         int sum = 0;

         for (int j = 0; j < m; j++)
         {
            int val = s[j];
            sum += val;
         }

         v.push_back(sum);
      }

      int result = INT_MAX;

      for (int i = 0; i < n; i++)
      {
         for (int j = i + 1; j < n; j++)
         {
            result = min(result, abs(v[i] - v[j]));
         }
      }

      cout << result << '\n';
   }

   return 0;
}