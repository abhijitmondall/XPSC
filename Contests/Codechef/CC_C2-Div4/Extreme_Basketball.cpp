#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   while (n--)
   {
      int a, b;
      cin >> a >> b;

      int count = 0;

      while (a < b + 10)
      {
         a += 3;
         count++;
      }

      cout << count << '\n';
   }

   return 0;
}