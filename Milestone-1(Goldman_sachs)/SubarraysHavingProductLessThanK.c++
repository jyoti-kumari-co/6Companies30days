class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int low;
        int high;
        long long p = 1;
        int ans = 0;
        for(low=0,high=0;high<n;high++){
            p *= a[high];
         
         
                while(low<high && p>=k){
                   p = p/a[low];
                   low++;
                }
                if(p<k){
                ans += 1 + high-low;
            }
            
        }
        return ans;
    }
};
