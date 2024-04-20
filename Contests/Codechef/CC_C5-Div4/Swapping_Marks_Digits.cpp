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
      string A, B;
      cin >> A >> B;

      if ((A[0] > B[0] || A[1] > B[0]) || (A[0] > B[1] || A[1] > B[1]))
      {
         cout << "Yes" << endl;
      }
      else
      {
         cout << "No" << endl;
      }
   }

   return 0;
}