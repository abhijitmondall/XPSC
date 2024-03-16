#include <bits/stdc++.h>
using namespace std;

int main()
{
   int A, B, T;
   cin >> A >> B >> T;

   int n = T / A;

   cout << B * n << '\n';

   return 0;
}