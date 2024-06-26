//Memoization or DP solution

#include <bits/stdc++.h> 
int solve(int index,vector<int>&heights,vector<int>&dp){
    if(index==0) return 0;
    if(dp[index]!=-1) return dp[index];
    int left=solve(index-1,heights,dp)+abs(heights[index]-heights[index-1]);
    int right=INT_MAX;
    if(index>1){
        right=solve(index-2,heights,dp)+abs(heights[index]-heights[index-2]);
    }
    return dp[index]= min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    return solve(n-1,heights,dp);
}