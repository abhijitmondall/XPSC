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
      int n, m;
      cin >> n >> m;

      vector<ll> v1(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v1[i];
      }

      vector<ll> v2(n);
      for (int i = 0; i < n; i++)
      {
         cin >> v2[i];
      }

      map<ll, ll> mpL;
      for (int i = 0; i < n; i++)
      {
         ll val = v2[i] % m;
         mpL[val]++;
      }

      ll count = 0;
      for (int i = 0; i < n; i++)
      {
         ll remain = v1[i] % m;
         ll val = (m - remain) % m;

         if (mpL.find(val) != mpL.end())
         {
            count += mpL[val];
         }
      }

      cout << count << '\n';
   }

   return 0;
}