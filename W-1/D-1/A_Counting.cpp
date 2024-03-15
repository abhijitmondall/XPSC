#include <bits/stdc++.h>
using namespace std;

int main()
{
   int A, B;
   cin >> A >> B;
   if (A > B)
   {
      cout << 0 << '\n';
   }
   else
   {
      cout << (B - A) + 1 << '\n';
   }

   return 0;
}