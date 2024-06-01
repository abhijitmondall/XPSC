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
      string s;
      cin >> s;

      bool left, right, up, down;

      left = s[0] == '1';
      right = s[1] == '1';
      up = s[2] == '1';
      down = s[3] == '1';

      int x, y;

      if (left && right)
      {
         x = 21;
      }
      else if (left || right)
      {
         x = 11;
      }
      else
      {
         x = 1;
      }

      if (up && down)
      {
         y = 21;
      }
      else if (up || down)
      {
         y = 11;
      }
      else
      {
         y = 1;
      }
      cout << x * y << '\n';
   }
   return 0;
}