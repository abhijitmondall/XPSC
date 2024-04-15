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
      long long int n;
      cin >> n;
      string s1, s2;
      cin >> s1 >> s2;

      long long int chef = 0, chefina = 0;
      for (int i = 0; i < n; i++)
      {
         if (s1[i] == s2[i])
         {
            continue;
         }
         else if (s1[i] == 'R' && s2[i] == 'S')
         {
            chef += 1;
         }
         else if (s1[i] == 'S' && s2[i] == 'R')
         {
            chefina += 1;
         }
         else if (s1[i] == 'S' && s2[i] == 'P')
         {
            chef += 1;
         }
         else if (s1[i] == 'P' && s2[i] == 'S')
         {
            chefina += 1;
         }
         else if (s1[i] == 'P' && s2[i] == 'R')
         {
            chef += 1;
         }
         else if (s1[i] == 'R' && s2[i] == 'P')
         {
            chefina += 1;
         }
      }

      if (chef < chefina)
      {
         cout << chefina - chef << '\n';
      }
      else if (chef == chefina)
      {
         cout << '\n';
      }
      else
      {
         cout << "0\n";
      }
   }

   return 0;
}