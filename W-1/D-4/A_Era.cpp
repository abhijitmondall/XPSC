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
      long long int arr[n];
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }

      int count = 0;

      for (int i = 0; i < n - 1; i++)
      {

         if ((arr[i + 1] - arr[i] + 1) > 0)
         {
            count += arr[i + 1] - (arr[i] + 1);
         }
      }

      if (arr[0] != 1)
      {
         if ((arr[0] - 1) > 0)
         {
            count += arr[0] - 1;
         }
      }

      cout << count << '\n';
   }

   return 0;
}