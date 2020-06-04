#include <vector>

using namespace std;
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int sum_Even = 0, sum_Odd = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i%2==0)
            {
                sum_Even = sum_Even + nums[i];
                sum_Even = max(sum_Even,sum_Odd);
            }
            else
            {
                sum_Odd = sum_Odd + nums[i];
                sum_Odd = max(sum_Odd,sum_Even);
            }
            
        }
        return max(sum_Even,sum_Odd);
    }
};