#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   vector<ll> v;
   for (ll i = 1; i < (1 << 29); i += 2)
   {
      v.push_back(i);
   }

   for (auto val : v)
   {
      cout << val << " ";
   }
   cout << "\n";

   while (tc--)
   {
      int n;
      cin >> n;
      // vector<ll> v;
      // for (ll i = 1; i < 1e9; i++)
      // {
      //    if (i % 2 != 0)
      //    {
      //       v.push_back(i);
      //    }
      // }

      // for (auto val : v)
      // {
      //    cout << val << " ";
      // }
      // cout << "\n";
   }

   return 0;
}