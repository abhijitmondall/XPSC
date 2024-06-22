#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

      vector<bool> prime(n + 1, true);

      for (int i = 2; i * i <= n; i += 2)
      {
         if (prime[i])
         {
            for (int j = i + i; j <= n; j += i)
            {
               prime[j] = false;
            }
         }
      }

      vector<ll> v;

      for (int i = 2; i <= n; i++)
      {
         if (prime[i])
         {
            v.push_back(i);
         }
      }

      ll len = v.size(), sum = 0;

      cout << endl;
   }
   return 0;
}