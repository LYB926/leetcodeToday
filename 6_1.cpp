#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxium = *max_element(candies.begin(),candies.end());
        for (vector<int>::iterator iter = candies.begin();iter!=candies.end();++iter)
        {
            if (*(iter)+extraCandies >= maxium)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
            
        }
        return ans;
    }
};