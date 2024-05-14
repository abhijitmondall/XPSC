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
      ll x;
      cin >> x;

      ll pos = __lg(x);
      ll b = 1 << (pos);
      ll a = b ^ x;

      cout << a << " " << b << endl;
   }

   return 0;
}