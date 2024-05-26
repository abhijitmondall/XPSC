#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(ll x)
{
   if (x == 1)
   {
      return false;
   }

   for (ll i = 2; i * i <= x; i++)
   {
      if (x % i == 0)
      {
         return false;
      }
   }

   return true;
}

bool isSqr(ll x)
{
   ll sq = sqrtl(x);

   return sq * sq == x;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   vector<ll> v(n);

   for (ll i = 0; i < n; i++)
   {
      cin >> v[i];
   }

   for (ll i = 0; i < n; i++)
   {
      if (isPrime(sqrtl(v[i])) && isSqr(v[i]))
      {
         cout << "YES" << '\n';
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}