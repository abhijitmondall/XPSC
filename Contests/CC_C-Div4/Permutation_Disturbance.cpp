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
         if (a[i] == i + 1 && a[i + 1] == i + 2)
         {
            count++;

            swap(a[i], a[i + 1]);
         }
      }

      for (int i = 0; i < n; i++)
      {
         if (a[i] == i + 1)
         {
            count++;
         }
      }

      cout << count << '\n';
   }

   return 0;
}