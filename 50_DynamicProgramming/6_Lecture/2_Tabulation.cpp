class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        dp[0] = nums[0];
        int negative = 0;
        for (int i = 1; i < n; i++)
        {
            // pick
            int pick = nums[i];
            if (i > 1)
            {
                pick += dp[i - 2];
            }
            // not pick
            int notpick = dp[i - 1];
            dp[i] = max(pick, notpick);
        }
        return dp[n - 1];
    }
};