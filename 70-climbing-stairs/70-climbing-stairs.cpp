class Solution {
public:
    int solve(vector<int> &dp,int n,int i){
        if(i==n){
            return 1;
        }
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=solve(dp,n,i+1)+solve(dp,n,i+2);
    }
    int climbStairs(int n) {
        vector<int> dp(46,-1);
        int ans=solve(dp,n,0);
        return ans;
    }
};