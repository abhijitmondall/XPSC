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
      int n, m;
      cin >> n >> m;

      vector<string> v;

      for (int i = 0; i < n; i++)
      {
         string s;
         cin >> s;
         v.push_back(s);
      }
      string tmp = "vika";
      int k = 0;
      for (int i = 0; i < m; i++)
      {
         for (auto str : v)
         {
            if (str[i] == tmp[k])
            {

               k++;
               break;
            }
         }

         if (k == 4)
         {
            break;
         }
      }

      if (k == 4)
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