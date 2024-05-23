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

      vector<ll> v(n);

      for (ll i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      if (n == 1)
      {
         cout << "Cook" << '\n';
         continue;
      }

      bool chef = true;

      for (ll int i = 0; i < n; i += 2)
      {
         if (v[i + 1] % 2 != 0)
         {
            chef = false;
            break;
         }
      }

      if (chef)
      {
         cout << "Chef" << '\n';
      }
      else
      {
         cout << "Cook" << '\n';
      }
   }

   return 0;
}