#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n;
   cin >> n;

   vector<ll> v;

   for (ll i = 2; i <= n; i++)
   {
      int x;
      cin >> x;
      v.push_back(x);
   }

   sort(v.begin(), v.end());

   if (v[0] != 1)
   {
      cout << 1 << '\n';
      return 0;
   }

   bool is_it = false;

   for (ll i = 0; i < n - 2; i++)
   {
      if (v[i] != v[i + 1] - 1)
      {
         cout << v[i] + 1 << '\n';
         is_it = true;
         break;
      }
   }

   if (!is_it)
   {
      cout << n << '\n';
   }

   return 0;
}