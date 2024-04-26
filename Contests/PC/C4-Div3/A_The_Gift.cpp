#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int x, n, m;
   cin >> x >> n >> m;

   (x + m) >= n ? cout << "YES" << '\n' : cout << "NO" << '\n';

   return 0;
}