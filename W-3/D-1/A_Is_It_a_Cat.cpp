#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int T;
   cin >> T;

   while (T--)
   {
      int n;
      cin >> n;

      string s;
      cin >> s;

      if (n < 4)
      {
         cout << "NO" << '\n';
         continue;
      }

      vector<char> V;
      map<char, int> mapList;

      for (int i = 0; i < s.size(); i++)
      {
         if (s[i] >= 'A' && s[i] <= 'Z')
         {
            s[i] += 32;
         }

         mapList[s[i]]++;
         if (mapList[s[i]] == 1)
         {
            V.push_back(s[i]);
         }
      }

      string str = "";

      for (auto c : V)
      {
         str += c;
      }

      if (str == "meow")
      {
         cout << "YES\n";
      }
      else
      {
         cout << "NO\n";
      }
   }

   return 0;
}