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
      string s;
      cin >> n >> s;
      if (n == 1)
      {
         cout << 0 << "\n";
         continue;
      }
      stack<char> stk;
      int cnt = 0;

      for (int i = 0; i < n; i++)
      {
         if (stk.empty())
         {
            stk.push(s[i]);
         }
         if (!stk.empty() && stk.top() != s[i])
         {
            stk.push(s[i]);
         }
      }

      cout << stk.size() / 2 << "\n";
   }
   return 0;
}