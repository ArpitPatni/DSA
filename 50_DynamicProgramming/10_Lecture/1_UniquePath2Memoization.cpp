 int solve(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid){
    if(i>=0 && j>=0 &&obstacleGrid[i][j]==1){
        return 0;
    }
    if(i==0 &&j==0) return 1;
    if(i<0 ||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int up=solve(i-1,j,dp,obstacleGrid);
    int left=solve(i,j-1,dp,obstacleGrid);
    return dp[i][j]=up+left;
}