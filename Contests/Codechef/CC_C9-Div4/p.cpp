#include <iostream>
using namespace std;

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
      string s;
      cin >> s;

      long long cnt = 0;
      char prev = '*';

      for (long long i = 0; i < n; i++)
      {
         if (s[i] == 'R')
         {
            if (prev != 'P')
            {
               cnt++;
               prev = 'P';
            }
            else
            {
               prev = 'S';
            }
         }
         else if (s[i] == 'P')
         {
            if (prev != 'S')
            {
               cnt++;
               prev = 'S';
            }
            else
            {
               prev = 'R';
            }
         }
         else if (s[i] == 'S')
         {
            if (prev != 'R')
            {
               cnt++;
               prev = 'R';
            }
            else
            {
               prev = 'P';
            }
         }
      }

      cout << cnt << '\n';
   }

   return 0;
}
