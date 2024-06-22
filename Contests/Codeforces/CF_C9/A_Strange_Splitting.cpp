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
      int n;
      cin >> n;
      vector<ll> v(n);

      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      bool is_it = false;
      for (auto val : v)
      {
         if (val != v[0])
         {
            is_it = true;
            break;
         }
      }

      if (!is_it)
      {
         cout << "NO" << '\n';
         continue;
      }

      cout << "YES" << '\n';
      for (int i = 0; i < n; i++)
      {
         if (i == 1)
         {
            cout << "B";
         }
         else
         {
            cout << "R";
         }
      }
      cout << '\n';
   }

   return 0;
}