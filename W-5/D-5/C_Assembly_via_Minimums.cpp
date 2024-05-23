#include <bits/stdc++.h>
using namespace std;

#define ll long long

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

      int len = n * (n - 1) / 2;

      vector<ll> v(len);
      for (ll i = 0; i < len; i++)
      {
         cin >> v[i];
      }

      sort(v.begin(), v.end());

      vector<ll> v2;
      ll l = 0, track = 1;
      while (l < len)
      {
         v2.push_back(v[l]);

         l += n - track;
         track++;
      }

      v2.push_back(1e9);

      for (auto val : v2)
      {
         cout << val << " ";
      }

      cout << "\n";
   }
   return 0;
}