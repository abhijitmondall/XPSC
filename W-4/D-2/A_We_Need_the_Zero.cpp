#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;
   while (tc--)
   {
      ll n;
      cin >> n;
      ll XOR = 0;

      for (ll i = 0; i < n; i++)
      {
         ll x;
         cin >> x;
         XOR ^= x;
      }

      if (n % 2 == 0)
      {
         if (XOR == 0)
         {
            cout << 0 << endl;
         }
         else
         {
            cout << -1 << endl;
         }
      }
      else
      {
         cout << XOR << endl;
      }
   }

   return 0;
}