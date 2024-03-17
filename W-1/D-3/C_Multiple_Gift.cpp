#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int X, Y;
   cin >> X >> Y;

   long long int val = 0;

   while (X <= Y)
   {
      X *= 2;
      val++;
   }

   cout << val << '\n';

   return 0;
}