class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
        int dp[K+1][N];
        for(int i=0;i<=K;i++){
            dp[i][0] = 0;
        }
        for(int j=0;j<N;j++){
            dp[0][j] = 0;
        }
        for(int t=1;t<=K;t++){
            int max = INT_MIN;
            for(int d=1;d<N;d++){
                if(dp[t-1][d-1]-A[d-1]>max){
                    max = dp[t-1][d-1]-A[d-1];
                }
               if(max+A[d]>dp[t][d-1]){
                   dp[t][d] = max+A[d];
               }
               else{
                   dp[t][d] = dp[t][d-1];
               }
            }
            
        }
        return dp[K][N-1];
    }
};
