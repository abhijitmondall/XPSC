#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      ll n;
      int k;
      cin >> n >> k;

      vector<int> v;
      for (int i = 0; i < k; i++)
      {
         int x;
         cin >> x;
         v.push_back(x);
      }

      sort(v.begin(), v.end());

      v.pop_back();

      int cnt = 0;

      for (int i = 0; i < k - 1; i++)
      {
         cnt += (v[i] - 1) * 2;
      }

      cout << cnt + k - 1 << "\n";
   }

   return 0;
}