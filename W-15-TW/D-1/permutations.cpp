#include <bits/stdc++.h>
using namespace std;
class Solution
{

private:
   void fn(vector<int> &nums, vector<vector<int>> &ans, vector<int> v, int frq[])
   {
      if (v.size() == nums.size())
      {
         ans.push_back(v);
         return;
      }

      for (int i = 0; i < nums.size(); i++)
      {
         if (!frq[i])
         {
            v.push_back(nums[i]);
            frq[i] = 1;
            fn(nums, ans, v, frq);
            v.pop_back();
            frq[i] = 0;
         }
      }
   }

public:
   vector<vector<int>> permute(vector<int> &nums)
   {
      int len = nums.size();
      vector<vector<int>> ans;
      vector<int> v;
      int frq[len];

      for (int i = 0; i < len; i++)
      {
         frq[i] = 0;
      }

      fn(nums, ans, v, frq);

      return ans;
   }
};

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   return 0;
}