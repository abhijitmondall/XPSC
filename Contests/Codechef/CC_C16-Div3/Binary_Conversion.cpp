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

      string s, t;
      cin >> s >> t;

      string s1 = s, t1 = t;
      sort(s1.begin(), s1.end());
      sort(t1.begin(), t1.end());

      if (s1 != t1)
      {
         cout << "NO" << endl;
         continue;
      }
      long long l = 0, cnt = 0;
      while (l < n)
      {
         if (s[l] != t[l])
         {
            cnt++;
         }
         l++;
      }

      if (k >= cnt / 2 && n >= k * 2)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}