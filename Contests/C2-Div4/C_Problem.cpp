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
      int N, M;
      cin >> N >> M;

      int i = N > M ? N : M;

      if (N == M)
      {
         cout << "YES"
              << "\n";
         continue;
      }

      while (i > 0)
      {

         if (N > M)
         {

            N -= 1;
            M += 1;
         }
         else
         {
            M -= 1;
            N += 3;
         }
         if (N == M)
         {
            break;
         }

         i--;
      }

      if (N == M && N > 0 && M > 0)
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