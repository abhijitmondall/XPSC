#include <bits/stdc++.h>
using namespace std;

const long long mxN = (1 << 15);
vector<int> all_palindrome;

void palindrome()
{
   for (int i = 0; i < mxN; i++)
   {
      string s = to_string(i);
      int len = s.length();
      bool is_it = true;
      int l = 0, r = len - 1;

      while (l < r)
      {
         if (s[l] != s[r])
         {
            is_it = false;
            break;
         }
         l++;
         r--;
      }

      if (is_it)
      {
         all_palindrome.push_back(i);
      }
   }
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   palindrome();

   int tc;
   cin >> tc;

   while (tc--)
   {
      int n;
      cin >> n;

      vector<int> cnt(mxN), v;

      for (int i = 0; i < n; i++)
      {
         int x;
         cin >> x;

         cnt[x]++;
         v.push_back(x);
      }

      long long ans = n;

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < all_palindrome.size(); j++)
         {
            int val = (v[i] ^ all_palindrome[j]);

            ans += cnt[val];
         }
      }

      cout << ans / 2 << '\n';
   }

   return 0;
}