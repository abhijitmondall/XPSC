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
      int n;
      cin >> n;
      string s;
      cin >> s;

      int l = 0, r = n - 1, mx_p = 0, mn_need = 0;

      while (l < r)
      {
         if (s[l] == s[r])
         {
            mx_p += 2;
         }
         else
         {
            mn_need++;
         }

         l++;
         r--;
      }

      vector<int> v;

      for (int i = 0; i < n + 1; i++)
      {
         int total = i - mn_need;
         if (total < 0)
         {
            v.push_back(0);
            continue;
         }

         total = max((total % 2), total - mx_p);
         total = max(0, total - (n % 2));

         if (total)
         {
            v.push_back(0);
         }
         else
         {
            v.push_back(1);
         }
      }

      for (auto val : v)
      {
         cout << val;
      }
      cout << "\n";
   }

   return 0;
}