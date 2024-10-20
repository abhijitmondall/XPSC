#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;
   while (tc--)
   {
      int n, k;
      cin >> n >> k;

      vector<int> a(n);
      for (int i = 0; i < n; ++i)
      {
         cin >> a[i];
      }

      for (int i = 0; i < k; ++i)
      {
         int x = a.front();
         int y = a.back();

         a.erase(a.begin());
         a.pop_back();

         int sum = x + y;
         auto it = lower_bound(a.begin(), a.end(), sum);
         a.insert(it, sum);
      }

      for (int num : a)
      {
         cout << num << " ";
      }
      cout << "\n";
   }
   return 0;
}