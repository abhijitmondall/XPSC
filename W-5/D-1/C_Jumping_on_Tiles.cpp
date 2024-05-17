#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   map<char, int> mapList;

   for (int i = 0; i < 26; i++)
   {
      char c = 'a' + i;
      mapList[c] = i + 1;
   }

   int tc;
   cin >> tc;

   while (tc--)
   {
      string s;
      cin >> s;

      char first = s[0], last = s[s.size() - 1];

      vector<pair<char, int>> v;

      for (int i = 0; i < s.size(); i++)
      {
         if (first < last)
         {
            if (s[i] >= first && s[i] <= last)
            {
               v.push_back({s[i], i + 1});
            }
         }
         else
         {
            if (s[i] >= last && s[i] <= first)
            {
               v.push_back({s[i], i + 1});
            }
         }
      }

      int cost = 0, tiles = 0;
      if (first < last)
      {
         sort(v.begin() + 1, v.end() - 1, [&](pair<char, int> a, pair<char, int> b)
              { return a.first < b.first; });
      }
      else
      {
         sort(v.begin() + 1, v.end() - 1, [&](pair<char, int> a, pair<char, int> b)
              { return a.first > b.first; });
      }

      vector<int> v1;
      v1.push_back(1);

      for (int i = 1; i < v.size(); i++)
      {
         int cst = abs(mapList[v[i - 1].first] - mapList[v[i].first]);
         cost += cst;
         tiles++;
         v1.push_back(v[i].second);
      }

      cout << cost << " " << tiles + 1 << endl;

      for (int i = 0; i < v1.size(); i++)
      {
         cout << v1[i] << " ";
      }

      cout << '\n';
   }

   return 0;
}