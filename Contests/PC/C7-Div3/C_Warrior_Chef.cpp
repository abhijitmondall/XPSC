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
      int n, h;
      cin >> n >> h;

      vector<int> v(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      sort(v.begin(), v.end(), greater<int>());

      int ans = 0;
      for (int i = 0; i < n; i++)
      {
         if (h - v[i] < 1)
         {
            ans = v[i];
            break;
         }

         h -= v[i];
      }

      cout << ans << '\n';
   }

   return 0;
}