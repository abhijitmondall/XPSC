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
      long long n;
      cin >> n;

      long long k = 1;
      while (k <= n)
      {
         k *= 2;
      }

      cout << k / 2 - 1 << endl;
   }

   return 0;
}