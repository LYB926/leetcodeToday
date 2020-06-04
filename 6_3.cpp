#include <vector>
using namespace std;

class Solution
{
public:
    double new21Game(int N, int K, int W)
    {
        vector<double> dp(N + W + 1, 0);
        for (int i = K; i <= N; i++)
        {
            dp[i] = 1;
        }
        double t = 0;
        for (int i = K; i <= K + W - 1; i++)
        {
            t += dp[i];
        }
        for (int i = K - 1; i >= 0; i--)
        {
            dp[i] = t / W;
            t -= dp[i + W];
            t += dp[i];
        }
        return dp[0];
    }
};
