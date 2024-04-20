#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll t;
   cin >> t;

   while (t--)
   {
      ll n;
      cin >> n;
      string s;
      cin >> s;

      if (n < 2)
      {
         cout << 0 << '\n';
         continue;
      }

      ll i = 1, op = 0;

      while (i < n)
      {
         if (s[i] == s[i - 1])
         {
            op++;
         }

         i++;
      }

      cout << op << '\n';
   }

   return 0;
}