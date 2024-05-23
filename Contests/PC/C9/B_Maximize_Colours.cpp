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
      int x, y, z;
      cin >> x >> y >> z;

      vector<int> colors = {x, y, z};
      sort(colors.rbegin(), colors.rend());

      int cnt = 0;

      if (colors[0] > 0)
      {
         cnt++;
         colors[0]--;
      }
      if (colors[1] > 0)
      {
         cnt++;
         colors[1]--;
      }
      if (colors[2] > 0)
      {
         cnt++;
         colors[2]--;
      }

      if (colors[0] > 0 && colors[1] > 0)
      {
         cnt++;
         colors[0]--;
         colors[1]--;
      }
      if (colors[0] > 0 && colors[2] > 0)
      {
         cnt++;
         colors[0]--;
         colors[2]--;
      }
      if (colors[1] > 0 && colors[2] > 0)
      {
         cnt++;
         colors[1]--;
         colors[2]--;
      }

      cout << cnt << '\n';
   }

   return 0;
}