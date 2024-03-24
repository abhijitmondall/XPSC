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
      int N;
      cin >> N;
      int a[N];

      vector<int> v;

      for (int i = 0; i < N; i++)
      {
         cin >> a[i];
      }

      for (int i = 0; i < N; i++)
      {
         int n;
         cin >> n;

         int count = a[i];

         while (n--)
         {
            char c;
            cin >> c;

            if (c == 'D')
            {
               if (count == 9)
               {
                  count = 0;
               }
               else
               {
                  count++;
               }
            }
            else
            {
               if (count == 0)
               {
                  count = 9;
               }
               else
               {
                  count--;
               }
            }
         }

         v.push_back(count);
      }

      for (auto val : v)
      {
         cout << val << " ";
      }

      cout << "\n";
   }

   return 0;
}