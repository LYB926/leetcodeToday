#include <iostream>
#include <cmath>

class Solution
{
public:
    int sumNums(int n)
    {
        int sum = (int)(pow((double)n,2.0)+n) >> 1;
        return sum;
    }
};