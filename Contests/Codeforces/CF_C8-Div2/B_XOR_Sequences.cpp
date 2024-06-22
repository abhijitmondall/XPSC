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
      ll x, y;
      cin >> x >> y;

      int dif = x > x ? x - y : y - x;

      // cout << dif << endl;

      for (int i = 1; i <= dif; i++)
      {
         cout << i << endl;
      }

      vector<ll> v;
      // for (ll i = 1; i <= dif; i++)
      // {
      //    cout << i << endl;
      //    ll xVal = (i ^ x);
      //    ll yVal = (xVal ^ y);

      //    cout << (i ^ x) << endl;

      //    if (yVal <= dif)
      //    {
      //       v.push_back(xVal);
      //    }
      // }

      // cout << v.size() << endl;
   }
   return 0;
}