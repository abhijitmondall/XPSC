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
      int n;
      cin >> n;

      int cows = n / 4;
      int chickens = (n % 4) / 2;
      cout << cows + chickens << endl;
   }

   return 0;
}