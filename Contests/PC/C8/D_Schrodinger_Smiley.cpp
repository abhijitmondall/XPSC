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
      stack<char> stk;
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
         char s;
         cin >> s;
         if (i == 0)
         {
            stk.push(s);
         }

         if (!stk.empty() && stk.top() == ':' && s == ')')
         {
            ans++;
         }
         stk.push(s);
      }

      cout << ans << '\n';
   }
   return 0;
}