#include <bits/stdc++.h>
using namespace std;

int main()
{
   int T;
   cin >> T;
   while (T--)
   {
      int n;
      cin >> n;
      vector<long long int> v;

      for (int i = 0; i < n; i++)
      {
         long long int x;
         cin >> x;
         v.push_back(x);
      }

      sort(v.begin(), v.end());

      long long int min = v[0], sum = 0;

      for (int i = 0; i < v.size(); i++)
      {
         if (v[i] != min)
         {
            sum += v[i] - min;
         }
      }

      cout << sum << '\n';
   }

   return 0;
}