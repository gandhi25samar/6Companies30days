Problem Link : https://practice.geeksforgeeks.org/problems/maximum-profit4657/1
Solution Explanation : https://youtu.be/3YILP-PdEJA

******************************************************************************

class Solution {
  public:
    int maxProfit(int k, int n, int a[]) {
        int dp[k+1][n];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=k;i++)
        {
            int maxi = INT_MIN;
            for(int j=1;j<n;j++)
            {
                maxi = max(maxi,dp[i-1][j-1]-a[j-1]);
                dp[i][j] = max(dp[i][j-1],maxi+a[j]);
            }
        }
        return dp[k][n-1];
    }
};
