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
      stack<char> stk;

      for (int i = 0; i < n; i++)
      {
         char ch;
         cin >> ch;

         if (!stk.empty() && stk.top() == '(' && ch == ')')
         {
            stk.pop();
         }
         else
         {
            stk.push(ch);
         }
      }

      cout << stk.size() / 2 << '\n';
   }

   return 0;
}