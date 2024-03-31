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
      }
      else
      {
         int i = 0;
         while (i < n - 1)
         {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
               s[i] += 32;
            }

            if (s[i + 1] >= 'A' && s[i + 1] <= 'Z')
            {
               s[i + 1] += 32;
            }

            if (s[i] == s[i + 1])
            {
               s.erase(s.begin() + i);
               s.erase(s.begin() + (i + 1));
               n -= 2;
            }
            else
            {
               i++;
            }
         }

         if (s == "meow")
         {
            cout << "YES\n";
         }
         else
         {
            cout << "NO\n";
         }
      }
   }

   return 0;
}