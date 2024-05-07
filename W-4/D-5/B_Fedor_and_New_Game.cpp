#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n, m, k;
   cin >> n >> m >> k;

   vector<int> arr(m + 1);
   for (int i = 0; i <= m; i++)
   {
      cin >> arr[i];
   }

   vector<vector<int>> all_masks;

   for (int i = 0; i <= m; i++)
   {
      vector<int> v;
      for (int j = 0; j < n; j++)
      {
         if ((arr[i] >> j) & 1)
         {
            v.push_back(1);
         }
         else
         {
            v.push_back(0);
         }
      }

      all_masks.push_back(v);
   }

   int ans = 0;
   vector<int> fedor_mask = all_masks[m];

   for (int i = 0; i < all_masks.size() - 1; i++)
   {
      int cnt = 0;
      vector<int> msk = all_masks[i];
      for (int j = 0; j < n; j++)
      {
         if (fedor_mask[j] != msk[j])
         {
            cnt++;
         }
      }

      if (cnt <= k)
      {
         ans++;
      }
   }

   cout << ans << '\n';

   return 0;
}