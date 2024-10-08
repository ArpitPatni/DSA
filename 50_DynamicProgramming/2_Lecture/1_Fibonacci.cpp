//Time complexity-Linear pattern O(n)
//space complexity
//Recursion stack space O(n)+ O(n) for dp array

#include<iostream>
using namespace std;
int solve(int n,vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=solve(n-1,dp)+solve(n-2,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<solve(n,dp)<<endl;
    return 0;
}