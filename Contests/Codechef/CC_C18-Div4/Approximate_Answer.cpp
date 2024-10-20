#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int x, y, k;
   cin >> x >> y >> k;

   int d = abs(x - y);
   if (k >= d)
   {
      cout << "Yes" << endl;
   }
   else
   {
      cout << "No" << endl;
   }
   return 0;
}