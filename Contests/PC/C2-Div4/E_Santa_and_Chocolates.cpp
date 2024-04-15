#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll T;
   cin >> T;

   while (T--)
   {
      ll N, K;
      cin >> N >> K;
      ll sum = 0;
      for (ll i = 0; i < N; i++)
      {
         ll x;
         cin >> x;
         sum += x;
      }

      int result;
      result = sum / N;

      if (sum >= N && result >= 0 && result <= K && K > 0)
      {
         cout << "YES" << '\n';
      }
      else
      {
         cout << "NO" << '\n';
      }
   }

   return 0;
}