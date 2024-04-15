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
      long long n, l, r;
      cin >> n >> l >> r;

      long long happy = 0, sad = 0, count = 0;

      for (long long i = 0; i < n; i++)
      {
         long long x;
         cin >> x;

         if ((x >= l) && (x <= r))
         {
            count++;
         }
         else
         {
            count--;
         }

         if (count < sad)
         {
            sad = count;
         }
         if (count > happy)
         {
            happy = count;
         }
      }

      cout << happy << " " << sad << '\n';
   }

   return 0;
}