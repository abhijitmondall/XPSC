#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--)
   {
      long long n, c, d;
      cin >> n >> c >> d;

      vector<ll> v(n * n);
      vector<ll> v2(n);
      vector<ll> v3[n];
      for (ll i = 0; i < n * n; i++)
      {
         cin >> v[i];
      }

      sort(v.begin(), v.end());

      for (ll i = 0; i < n; i++)
      {
         if (i == 0)
         {
            v2[i] = v[i];
         }
         else if (i < n)
         {
            v2[i] = v2[i - 1] + c;
         }
      }

      for (ll i = 0; i < n; i++)
      {
         for (ll j = 0; j < n; j++)
         {
            if (j == 0)
            {
               v3[i].push_back(v2[i]);
            }
            else
            {
               v3[i].push_back(v3[i][j - 1] + d);
            }
         }
      }

      vector<ll> v4;
      for (ll i = 0; i < n; i++)
      {
         for (ll j = 0; j < n; j++)
         {
            v4.push_back(v3[i][j]);
         }
      }

      sort(v4.begin(), v4.end());

      bool is_it = true;

      for (int i = 0; i < v4.size(); i++)
      {
         if (v[i] != v4[i])
         {
            is_it = false;
            break;
         }
      }

      if (is_it)
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