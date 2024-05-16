#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   vector<string> v;

   for (int i = 0; i < n; i++)
   {
      string s;
      cin >> s;
      v.push_back(s);
   }

   reverse(v.begin(), v.end());

   set<string> st;

   for (auto val : v)
   {
      if (st.find(val) == st.end())
      {
         st.insert(val);
         if (val.size() >= 2)
         {
            cout << val.substr(val.size() - 2);
         }
         else
         {
            cout << val;
         }
      }
   }

   cout << "\n";

   return 0;
}