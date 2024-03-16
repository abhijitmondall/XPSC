#include <bits/stdc++.h>
using namespace std;

int main()
{
   int A, B, C;
   cin >> A >> B >> C;

   int D;

   for (int i = A; i <= B; i++)
   {
      if (i % C == 0)
      {
         cout << i << '\n';
         return 0;
      }
   }

   cout << -1 << '\n';

   return 0;
}