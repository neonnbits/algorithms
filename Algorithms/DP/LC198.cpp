#include <iostream>
#include <vector>
using namespace std;

// space optimized bottom-up approach
class Solution1 {
  public:
    int rob(vector<int> &nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];

        vector<int> dp(n);
        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);

        int current = 0;
        for (int i = 2; i < n; i++) {
            int current = max(prev1,            // Don't rob house i
                              nums[i] + prev2); // Rob house i
            prev2 = prev1;
            prev1 = current;
        }

        return max(prev1, prev2);
    }
};

// bottom-up (iterative)
class Solution2 {
  public:
    int rob(vector<int> &nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];

        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1],            // Don't rob house i
                        nums[i] + dp[i - 2]); // Rob house i
        }

        return dp[n - 1];
    }
};

// using memoization
class Solution3 {
  public:
    int helper(vector<int> &nums, vector<int> &dp, int n) {
        if (n >= nums.size())
            return 0;

        if (dp[n] != -1)
            return dp[n];

        dp[n] = max(helper(nums, dp, n + 1), nums[n] + helper(nums, dp, n + 2));

        return dp[n];
    }
    int rob(vector<int> &nums) {
        vector<int> dp(nums.size() + 1, -1);
        return helper(nums, dp, 0);
    }
};