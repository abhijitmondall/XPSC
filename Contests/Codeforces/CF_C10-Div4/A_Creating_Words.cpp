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
      string a, b;
      cin >> a >> b;

      char temp = a[0];
      a[0] = b[0];
      b[0] = temp;

      cout << a << " " << b << "\n";
   }

   return 0;
}