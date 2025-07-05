#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int tribonacci(int n) {
        if (n == 0)
            return 0;
        if (n <= 2)
            return 1;

        int prev3 = 0;
        int prev2 = 1, prev1 = 1;

        for (int i = 3; i <= n; i++) {
            int current = prev3 + prev2 + prev1;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};

// memoization approach
class Solution2 {
  public:
    int helper(int n, vector<int> &dp) {
        if (n <= 0)
            return 0;
        if (n <= 2)
            return 1;

        if (dp[n] != -1)
            return dp[n];
        dp[n] = helper(n - 1, dp) + helper(n - 2, dp) + helper(n - 3, dp);

        return dp[n];
    }

    int tribonacci(int n) {
        vector<int> dp(n + 1, -1);
        return helper(n, dp);
    }
};