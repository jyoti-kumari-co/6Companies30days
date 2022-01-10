class Solution{
    public:
    string colName (long long int n)
    {
      
         // your code here
         string ans = "";
         while(n){
             char c = 'A' + (n-1)%26;
             ans += c;
             n = (n-1)/26;
         }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
