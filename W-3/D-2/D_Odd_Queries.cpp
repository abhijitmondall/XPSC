#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;

   while (t--)
   {
      int n, q;
      cin >> n >> q;

      vector<ll> v(n);
      vector<ll> pr(n);

      for (int i = 0; i < n; i++)
      {
         ll val;
         cin >> val;

         v.push_back(val);

         if (i == 0)
         {
            pr[i] = val;
         }
         else
         {
            pr[i] = pr[i - 1] + val;
         }
      }

      while (q--)
      {
         ll l, r, k;
         cin >> l >> r >> k;

         ll sum = 0;

         for (int i = l; i <= r; i++)
         {
            sum += k;
         }

         int mid = 0;

         if (l - 2 >= 0 && r - 1 <= n - 1)
         {
            int left = pr[l - 2];
            int right = pr[r - 1];
            mid = right - left;
            sum += (pr[n - 1] - mid);
         }
         else if (l - 2 < 0 && r - 1 <= n - 1)
         {
            int left = pr[r - 1];
            int right = pr[n - 1];
            mid = right - left;
            sum += mid;
         }

         if (sum % 2 != 0)
         {
            cout << "YES\n";
         }
         else
         {
            cout << "NO\n";
         }
      }
   }

   return 0;
}