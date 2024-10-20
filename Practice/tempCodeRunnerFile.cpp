#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   string s;
   cin >> s;

   // replace(s.begin(), s.end(), 'a', '!');
   s.replace(1, 3, 'a');
   cout << s << endl;

   return 0;
}