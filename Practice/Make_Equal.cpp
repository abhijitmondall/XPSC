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

      if (v[0] != v[n - 1])
      {
         cout << "NO" << '\n';
         continue;
      }

      bool is_it = true;

      for (int i = 1; i < n - 1; i++)
      {
         if (v[i] < v[0])
         {
            is_it = false;
            break;
         }
      }

      if (is_it)
         cout << "YES" << '\n';
      else
         cout << "NO" << '\n';
   }

   return 0;
}