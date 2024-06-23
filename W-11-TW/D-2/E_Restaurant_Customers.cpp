#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   map<ll, ll> mpl;
   while (n--)
   {
      ll l, r;
      cin >> l >> r;

      mpl[l]++;
      mpl[r + 1]--;
   }

   ll sum = 0, mx = 0;

   for (auto [key, val] : mpl)
   {
      sum += val;

      mx = max(mx, sum);
   }

   cout << mx << endl;

   return 0;
}