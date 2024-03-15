#include <bits/stdc++.h>
using namespace std;

int main()
{
   int A, B;
   cin >> A >> B;

   if (A > B)
   {
      cout << A + A - 1 << '\n';
   }
   else if (B > A)
   {
      cout << B + B - 1 << '\n';
   }
   else
   {
      cout << A + B << '\n';
   }

   return 0;
}