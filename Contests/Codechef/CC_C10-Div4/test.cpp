#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int a, b;
   cin >> a >> b;
   int ans = (a / __gcd(a, b)) * b;

   cout << "Test" << " " << ans << endl;
   return 0;
}