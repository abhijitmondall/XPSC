#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;

      vector<string> v(n);
      unordered_set<string> s;

      for (int i = 0; i < n; i++)
      {
         cin >> v[i];
         s.insert(v[i]);
      }

      for (int i = 0; i < n; i++)
      {
         bool is_it = false;

         for (int j = 0; j < v[i].size(); j++)
         {
            string leftSubStr = v[i].substr(0, j);
            string rightSubStr = v[i].substr(j);

            if (s.count(leftSubStr) && s.count(rightSubStr))
            {
               is_it = true;
               break;
            }
         }

         if (is_it)
         {
            cout << 1;
         }
         else
         {
            cout << 0;
         }
      }

      cout << "\n";
   }

   return 0;
}