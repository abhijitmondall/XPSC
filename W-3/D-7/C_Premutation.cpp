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

      int i = n;
      map<int, int> mapList;
      vector<int> arr[n];
      while (i--)
      {

         vector<int> v;

         for (int j = 0; j < n - 1; j++)
         {
            int x;
            cin >> x;
            v.push_back(x);

            if (j == n - 2)
            {
               mapList[x]++;
            }
         }

         // cout << mapList[v[n - 2]] << endl;
         cout << v[n - 2] << endl;

         // arr[v[n - 2]] = v;
         if (mapList[v[n - 2]] == 1)
         {
            // cout << mapList[v[n - 2]] << endl;
            // arr[v[n - 2]].clear();
            // arr[v[n - 2]] = v;
         }

         // for (auto val : v)
         // {
         //    cout << val << " ";
         // }
         // cout << endl;
      }

      // int k = 0;
      // for (auto [key, val] : mapList)
      // {
      //    if (val == 1)
      //    {
      //       k = key;
      //    }
      //    cout << key << " " << val << " " << '\n';
      // }

      // cout << k << endl;

      for (auto val : arr[0])
      {
         cout << val << " ";
      }
      cout << "\n";
   }

   return 0;
}