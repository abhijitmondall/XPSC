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
      int n, f, k;
      cin >> n >> f >> k;

      vector<int> v;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         v.push_back(x);
      }
      int fav = v[f - 1];

      sort(v.begin(), v.end(), greater<int>());

      bool is_it = false, cnt = 0;

      for (int i = 0; i < n - 1; i++)
      {
         if (v[i] == fav && i < f)
         {
            is_it = true;
         }
         if (v[i] == fav && i >= f)
         {
            cnt++;
         }
      }

      if (is_it)
      {
         // cout << v[f] << " " << fav << endl;
         if (f < n && cnt > 0)
         {
            cout << "MAYBE" << '\n';
         }
         else
         {
            cout << "YES" << '\n';
         }
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}