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
      unordered_set<int> st;
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n - 1; j++)
         {
            int x;
            cin >> x;
            if (i == 0)
            {
               st.insert(x);
               v.push_back(x);
            }
         }
      }

      for (auto val : v)
      {
         cout << val << " ";
      }

      cout << "\n";
   }

   return 0;
}