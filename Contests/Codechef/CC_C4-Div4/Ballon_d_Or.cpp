#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   long long t;
   cin >> t;
   while (t--)
   {
      long long n;
      cin >> n;
      long long count = 0;

      for (long long i = 0; i < n; i++)
      {
         int x;
         cin >> x;
         if (x == 2)
         {
            count++;
         }
      }

      if (count % 8 == 0)
      {
         cout << "YES" << '\n';
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}