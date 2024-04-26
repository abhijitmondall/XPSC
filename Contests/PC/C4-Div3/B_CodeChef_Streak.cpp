#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      int n;
      cin >> n;

      ll om[n], addy[n], omCount = 0, addyCount = 0;

      for (ll i = 0; i < n; i++)
      {
         cin >> om[i];
      }
      for (ll i = 0; i < n; i++)
      {
         cin >> addy[i];
      }

      ll l = 0;

      while (l < n)
      {
         ll temp = 0, r = 0;
         r += l;
         while (om[r] > 0 && r < n)
         {
            temp++;
            r++;
            l++;
         }

         l++;

         omCount = max(omCount, temp);
      }

      ll j = 0;

      while (j < n)
      {
         ll temp = 0, r = 0;
         r += j;
         while (addy[r] > 0 && r < n)
         {
            temp++;
            r++;
            j++;
         }

         j++;

         addyCount = max(addyCount, temp);
      }

      if (omCount > addyCount)
      {
         cout << "Om" << '\n';
      }
      else if (omCount < addyCount)
      {
         cout << "Addy" << '\n';
      }
      else
      {
         cout << "Draw" << '\n';
      }
   }

   return 0;
}