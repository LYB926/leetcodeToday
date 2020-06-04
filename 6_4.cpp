#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int length = nums.size();
        vector<int> lhs(length, 0), rhs(length, 0);
        vector<int> ans(length);

        lhs[0] = 1;
        for (int i = 1; i < length; ++i)
        {
            lhs[i] = lhs[i - 1] * nums[i - 1];
        }

        rhs[length - 1] = 1;
        for (int i = length - 2; i >= 0; --i)
        {
            rhs[i] = rhs[i + 1] * nums[i + 1];
        }

        for (int i = 0; i != length; ++i)
        {
            ans[i] = lhs[i] * rhs[i];
        }
        return ans;
    }
};