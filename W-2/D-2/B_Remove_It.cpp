#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll N, X;
   cin >> N >> X;

   vector<ll> v;

   for (ll i = 0; i < N; i++)
   {
      ll val;
      cin >> val;
      v.push_back(val);
   }

   for (ll i = 0; i < N; i++)
   {
      if (v[i] != X)
      {
         cout << v[i] << " ";
      }
   }

   cout << '\n';

   return 0;
}