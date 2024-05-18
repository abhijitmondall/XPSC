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
      ll a, b, c;
      cin >> a >> b >> c;

      ll first = a - 1, second;

      if (c > b)
      {
         second = (c - b) + (c - 1);
      }
      else
      {
         second = b - 1;
      }

      if (first < second)
      {
         cout << 1 << '\n';
      }
      else if (first > second)
      {
         cout << 2 << '\n';
      }
      else
      {
         cout << 3 << '\n';
      }
   }

   return 0;
}