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

      string s;
      cin >> s;

      string s1 = "meow";
      string s2 = "";

      for (int i = 0; i < n; i++)
      {
         if (s[i] >= 'A' && s[i] <= 'Z')
         {
            s[i] += 32;
         }

         if (i == 0)
         {
            s2.push_back(s[i]);
         }
         else if (s2.back() != s[i])
         {
            s2.push_back(s[i]);
         }
      }

      if (s1 == s2)
      {
         cout << "YES" << '\n';
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}