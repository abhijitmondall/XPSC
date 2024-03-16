#include <bits/stdc++.h>
using namespace std;

int main()
{
   string S;
   cin >> S;

   set<char> sl;

   for (auto ch : S)
   {
      sl.insert(ch);
   }

   string str;
   for (auto ch : sl)
   {
      str += ch;
   }

   int count = 0;
   for (char i = 'a'; i <= 'z'; i++)
   {

      if (i != str[count])
      {
         cout << i << '\n';
         return 0;
      }

      count++;
   }

   cout << "None" << '\n';

   return 0;
}