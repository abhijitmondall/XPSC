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
      string s;
      cin >> s;

      int hour = stoi(s.substr(0, 2));
      int minute = stoi(s.substr(3));

      string amOrPm = (hour < 12) ? "AM" : "PM";

      if (hour == 0)
      {
         hour = 12;
      }
      else if (hour > 12)
      {
         hour -= 12;
      }

      if (hour < 10)
      {
         if (minute < 10)
         {
            cout << 0 << hour << ":" << 0 << minute << " " << amOrPm << endl;
         }
         else
         {
            cout << 0 << hour << ":" << minute << " " << amOrPm << endl;
         }
      }
      else
      {
         if (minute < 10)
         {
            cout << hour << ":" << 0 << minute << " " << amOrPm << endl;
         }
         else
         {
            cout << hour << ":" << minute << " " << amOrPm << endl;
         }
      }
   }

   return 0;
}