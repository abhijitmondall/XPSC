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

      sort(v.begin(), v.end());

      bool isIt = true;

      for (int i = 1; i <= n; i++)
      {
         if (v[i - 1] > i)
         {
            int val = v[i - 1] + 1;
            if (val > i)
            {
               isIt = false;
               break;
            }
         }
      }

      if (isIt)
      {
         cout << "YES\n";
      }
      else
      {
         cout << "NO\n";
      }
   }

   return 0;
}