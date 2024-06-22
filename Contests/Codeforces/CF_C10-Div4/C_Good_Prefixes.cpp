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
      int n;
      cin >> n;

      vector<ll> v(n);

      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
      }

      vector<ll> v2;
      ll l = 0, ans = 0, sum = 0;

      priority_queue<ll> q;

      while (l < n)
      {
         q.push(v[l]);
         sum += v[l];
         ll mx = q.top(), len = q.size();

         if ((sum - mx) == mx)
         {
            ans++;
         }
         l++;
      }

      cout << ans << "\n";
   }

   return 0;
}