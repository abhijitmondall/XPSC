#include <bits/stdc++.h>
using namespace std;

int main()
{
   int T;
   cin >> T;
   while (T--)
   {
      int n;
      cin >> n;
      string str;
      cin >> str;

      int count = 0;
      if (n < 3)
      {
         cout << "NO" << '\n';
         continue;
      }
      else
      {
         stack<char> stk;

         for (auto val : str)
         {
            if (!stk.empty())
            {
               if ((stk.top() == 'R' && val == 'R') || (stk.top() == 'R' && val == 'B') || (stk.top() == 'B' && val == 'B') || (stk.top() == 'B' && val == 'R'))
               {
                  stk.pop();
               }
               else
               {
                  stk.push(val);
               }
            }
            else
            {
               stk.push(val);
            }
         }
         bool is_it = true;

         while (!stk.empty())
         {
            if (stk.top() == 'R' || stk.top() == 'B')
            {
               is_it = false;
               break;
            }

            stk.pop();
         }
         if (is_it)
         {
            cout << "YES" << '\n';
         }
         else
         {
            cout << "NO" << '\n';
         }
      }
   }

   return 0;
}