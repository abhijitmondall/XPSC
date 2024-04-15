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
      int N, X;
      cin >> N >> X;

      string s = to_string(N * X);

      if (s.length() == 5 && s[0] != '0')
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