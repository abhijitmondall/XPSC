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
      int n;
      cin >> n;

      int attA = 0, defA = 0;
      for (int i = 0; i < n; i++)
      {
         int a;
         cin >> a;
         attA += a;
      }
      for (int i = 0; i < n; i++)
      {
         int a;
         cin >> a;
         defA += a;
      }

      int attP = 0, defP = 0;
      for (int i = 0; i < n; i++)
      {
         int a;
         cin >> a;
         attP += a;
      }
      for (int i = 0; i < n; i++)
      {
         int a;
         cin >> a;
         defP += a;
      }

      if (attA > attP && defA > defP)
      {
         cout << "A" << '\n';
      }
      else if (attA < attP && defA < defP)
      {
         cout << "P" << '\n';
      }
      else
      {
         cout << "DRAW" << '\n';
      }
   }

   return 0;
}