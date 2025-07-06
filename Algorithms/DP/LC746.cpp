#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int helper(vector<int> &dp, vector<int> &cost, int n) {
        if (n >= cost.size())
            return 0;

        if (dp[n] != -1)
            return dp[n];
        dp[n] = cost[n] + min(helper(dp, cost, n + 1), helper(dp, cost, n + 2));

        return dp[n];
    }

    int minCostClimbingStairs(vector<int> &cost) {
        vector<int> dp(cost.size() + 1, -1);
        return min(helper(dp, cost, 0), helper(dp, cost, 1));
    }
};
