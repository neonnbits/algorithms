#include <iostream>
#include <vector>
using namespace std;

// memoization approach
class Solution {
  public:
    int helper(int n, vector<int> &dp) {
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        dp[n] = helper(n - 1, dp) + helper(n - 2, dp);

        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return helper(n, dp);
    }
};

// bottom up approach
class Solution2 {
  public:
    int climbStairs(int n) {
        if (n == 1)
            return 1;

        int prev2 = 1; // dp[0]
        int prev1 = 1; // dp[1]

        // to get the total number of ways we usually have to multiply the
        // number of ways to reach a particular stair with the number of ways we
        // can get to the target stair from that particular stair(here it is
        // always 1) so we do prev1 * 1 + prev2 * 1 = prev1 + prev2 (this might
        // seem a bit confusing)
        for (int i = 2; i <= n; i++) {
            int current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};