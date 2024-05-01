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
      int n, q;
      cin >> n >> q;

      string s;
      cin >> s;

      map<char, int> mapList;

      int l = 0, ch;

      while (l < n)
      {
         ch = s[l];
         int r = l;
         while (s[r] == ch)
         {
            mapList[s[l]]++;
            r++;
            l++;
         }

         l++;
      }

      while (q--)
      {
         int count = 0;

         for (auto [key, val] : mapList)
         {
            count = max(count, val);
         }

         cout << count << " ";

         char ch;
         cin >> ch;
         mapList[ch]++;
      }

      int count = 0;

      for (auto [key, val] : mapList)
      {
         count = max(count, val);
      }

      cout << count << " ";

      cout << "\n";
   }

   return 0;
}