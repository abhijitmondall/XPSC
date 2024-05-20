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

      string str;
      map<char, int> mapList;

      for (int i = 0; i < n; i++)
      {
         if (mapList.find(s[i]) == mapList.end())
         {
            str.push_back(s[i]);
         }

         mapList[s[i]]++;
      }

      sort(str.begin(), str.end());

      int l = 0, len = str.size();

      while (l < n)
      {
         int r = 0;

         while (r < len)
         {
            if (s[l] == str[r])
            {
               s[l] = str[len - 1 - r];
               break;
            }
            else if (s[l] == str[len - 1 - r])
            {
               s[l] = str[r];
               break;
            }
            else
            {
               r++;
            }
         }

         l++;
      }

      cout << s << endl;
   }

   return 0;
}