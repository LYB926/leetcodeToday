/*
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
说明：
你的算法应该具有线性时间复杂度。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/single-number
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int answer = nums[0];
        for (int i = 1; i != nums.size(); ++i)
        {
            answer = answer ^ nums[i];
        }
        return answer;
    }
};