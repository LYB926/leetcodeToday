#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int subarraysDivByK(vector<int> &A, int K)
    {
        unordered_map<int, int> record = {{0, 1}};
        int sum = 0, ans = 0;
        for (int elem : A)
        {
            sum = elem + sum;
            int mod = (sum % K + K) % K;
            if (record.count(mod))
            {
                ans = ans + record[mod];
            }
            record[mod]++;
        }
        return ans;
    }
};