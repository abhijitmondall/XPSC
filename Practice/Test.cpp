#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   string s;
   cin >> s;

   // replace(s.begin(), s.end(), 'a', '!');
   // replace(s.begin(), s.end() - 4, 'i', '#');

   for (char &c : s)
   {
      switch (c)
      {
      case 'a':
         c = '!';
         break;
      case 'e':
         c = '#';
         break;
         // Add more cases as needed
         // case 'i':
         //     c = '@';
         //     break;
         // case 'o':
         //     c = '$';
         //     break;
         // case 'u':
         //     c = '%';
         //     break;
      }
   }

   cout << s << endl;

   return 0;
}