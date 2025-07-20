#include <iostream>

using namespace std;
class Solution {
  public:
    // top down approach
    int helper(string s, int i, vector<int> &dp) {
        int n = s.size();
        if (i == n)
            return 1;

        if (s[i] == '0')
            return 0;
        if (dp[i] != -1)
            return dp[i];
        dp[i] = helper(s, i + 1, dp);
        if (i < n - 1 && (s[i] == '1' || (s[i] == '2' && s[i + 1] < '7')))
            dp[i] += helper(s, i + 2, dp);
        return dp[i];
    }

    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n + 1, 0);

        // bottom up without memoization
        int prev1 = 1;
        int prev2 = 0;
        for (int i = n - 1; i >= 0; i--) {
            int current = s[i] == '0' ? 0 : prev1;
            if (i < n - 1 && (s[i] == '1' || (s[i] == '2' && s[i + 1] < '7')))
                current += prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return s.empty() ? 0 : prev1;
    }
};