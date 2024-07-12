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
      int n, x, y;
      cin >> n >> x >> y;

      int op1 = n * x;
      int op2 = n / 2 * y + n % 2 * x;

      cout << max(op1, op2) << endl;
   }
   return 0;
}