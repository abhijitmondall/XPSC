#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int T;
   cin >> T;
   while (T--)
   {
      int n;
      cin >> n;

      int a[n];
      for (int i = 0; i < n; i++)
      {
         cin >> a[i];
      }

      int count = 0;
      for (int i = 0; i < n; i++)
      {
         if (a[i] != i + 1)
         {
            count++;
         }
      }

      if (count == n)
      {
         count = 0;
      }
      else if (count == 0)
      {
         count = 1;
      }

      cout << count << '\n';
   }

   return 0;
}