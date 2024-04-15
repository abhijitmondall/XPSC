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
      int n, a, b;
      cin >> n >> a >> b;

      if (n % 2 == 0)
      {
         int remainB = n / 2;
         long long b1 = n * a;
         long long b2 = remainB * b;
         if (b1 < b2)
         {
            cout << b1 << '\n';
         }
         else
         {
            cout << b2 << '\n';
         }
      }
      else
      {
         int remainB = (n - 1) / 2;
         long long b1 = n * a;
         long long b2 = remainB * b + a;

         if (b1 < b2)
         {
            cout << b1 << '\n';
         }
         else
         {
            cout << b2 << '\n';
         }
      }
   }

   return 0;
}