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
      int n, x, y;
      cin >> n >> x >> y;

      long long count = 0;
      for (int i = 0; i < n; i++)
      {
         int d;
         cin >> d;

         if (d * x > y)
         {
            count += y;
         }
         else
         {
            count += (d * x);
         }
      }

      cout << count << "\n";
   }

   return 0;
}