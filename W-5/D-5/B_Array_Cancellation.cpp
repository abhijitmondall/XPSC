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
      ll pos = 0, neg = 0;
      for (ll i = 0; i < n; i++)
      {
         ll x;
         cin >> x;
         if (x >= 0)
         {
            pos += x;
         }
         else
         {
            if (pos + x >= 0)
            {
               pos += x;
            }
            else
            {
               x += pos;
               pos = 0;
               neg += x;
            }
         }
      }

      cout << -neg << endl;
   }
   return 0;
}