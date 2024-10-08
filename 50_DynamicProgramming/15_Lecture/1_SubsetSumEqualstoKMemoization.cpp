#include <bits/stdc++.h>
bool solve(int index, int target, vector<int> &arr, vector<vector<int>> &dp)
{
    if (target == 0)
        return true;
    if (index == 0)
        return (arr[0] == target);
    if (dp[index][target] != -1)
        return dp[index][target];
    bool notTake = solve(index - 1, target, arr, dp);
    bool take = false;
    if (target >= arr[index])
    {
        take = solve(index - 1, target - arr[index], arr, dp);
    }
    return dp[index][target] = take | notTake;
}
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
    return solve(n - 1, k, arr, dp);
}