#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int x, y;
   cin >> x >> y;

   if (x > y)
   {
      cout << "FREEKICK" << '\n';
   }
   else
   {
      cout << "PENALTY" << '\n';
   }

   return 0;
}