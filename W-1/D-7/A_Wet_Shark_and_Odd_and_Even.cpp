#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   vector<ll> even;
   vector<ll> odd;
   ll sum1 = 0, sum2 = 0;

   for (int i = 0; i < n; i++)
   {
      ll x;
      cin >> x;
      if (x % 2 == 0)
      {
         even.push_back(x);
         sum1 += x;
      }
      else
      {
         odd.push_back(x);
      }
   }

   sort(odd.begin(), odd.end(), greater<ll>());

   if (odd.size() % 2 != 0)
   {
      odd.pop_back();
   }

   for (auto val : odd)
   {
      sum2 += val;
   }

   cout << sum1 + sum2 << '\n';

   return 0;
}