#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   long long int T;
   cin >> T;

   while (T--)
   {
      int n, k;
      long long int x;
      cin >> n >> k >> x;

      if (x >= pow(2, k - 1))
      {
         cout << "Yes" << '\n';
      }
      else
      {
         cout << "No" << '\n';
      }
   }

   return 0;
}