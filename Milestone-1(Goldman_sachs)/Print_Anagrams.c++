class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        unordered_map<string,vector<string>> st;
        for(int i=0;i<string_list.size();i++){
            string word = string_list[i];
            sort(word.begin(),word.end());
            st[word].push_back(string_list[i]);
        }
        vector<vector<string>> ans;
        for(auto i:st){
            ans.push_back(i.second);
        }
        return ans;
    }
};
