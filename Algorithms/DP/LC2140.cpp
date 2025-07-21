#include <iostream>
using namespace std;
class Solution {
  public:
    long long helper(vector<vector<int>> &questions, vector<long long> &dp,
                     int index) {
        if (index >= questions.size()) {
            return 0;
        }
        if (dp[index] != -1)
            return dp[index];
        // Using top-down DP with memoization: for each index, we either
        // take the current question (earning points and skipping ahead)
        // or skip it (moving to next index). Results are cached in dp array.
        dp[index] =
            max({questions[index][0] +
                     helper(questions, dp, index + 1 + questions[index][1]),
                 helper(questions, dp, index + 1)});
        return dp[index];
    }

    long long mostPoints(vector<vector<int>> &questions) {
        int n = questions.size();
        vector<long long> dp(n, -1);
        return helper(questions, dp, 0);
    }
};

class Solution2 {
  public:
    long long mostPoints(vector<vector<int>> &questions) {
        int n = questions.size();
        vector<long long> dp(200001, 0);
        for (int i = n - 1; i >= 0; i--) {
            long long take = questions[i][0] + dp[i + questions[i][1] + 1];
            long long skip = dp[i + 1];
            dp[i] = max(take, skip);
        }
        return dp[0];
    }
};