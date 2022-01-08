class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> v;
        int nge[n];
        stack<int> st;
         nge[n-1] = n;
            st.push(n-1);
        for(int i=n-2;i>=0;i--){
           
           while(!st.empty() && arr[i]>=arr[st.top()]){
               st.pop();
           }
           if(st.empty())nge[i] = n;
          else nge[i] = st.top();
           st.push(i);
        }
        for(int i=0;i<=n-k;i++){
            int j = i;
            while(nge[j]<i+k){
                j = nge[j];
            }
            v.push_back(arr[j]);
        }
        return v;
    }
};
