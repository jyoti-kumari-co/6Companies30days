class Solution {
public:
    int longestMountain(vector<int>& arr) {
       int ans = 0;
      int n = arr.size();
        if(n<3)return ans;
        bool peak = false;
        bool velly = false;
        int i = 0;
        while(i<n-1){
            if(arr[i]<arr[i+1]){
                int start = i;
                while(i<n-1 && arr[i]<arr[i+1]){
                    peak = true;
                    i++;
                }
                while(i<n-1 && arr[i]>arr[i+1]){
                    velly = true;
                    i++;
                }
                if(peak && velly){
                ans = ans>(i-start+1)?ans:(i-start+1);
            }
               peak = false;
            velly = false;
                
            }
            else{
                i++;
            }
            
        }
        return ans;
    }
};

//time complexity = O(n)
