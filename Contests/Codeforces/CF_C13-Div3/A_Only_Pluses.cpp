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
      int a, b, c;
      cin >> a >> b >> c;
      vector<int> v(3);
      v[0] = a;
      v[1] = b;
      v[2] = c;

      int ans = 1, it = 5;
      while (it--)
      {
         sort(v.begin(), v.end());
         v[0]++;
      }

      for (auto val : v)
      {
         ans *= val;
      }

      cout << ans << '\n';
   }

   return 0;
}