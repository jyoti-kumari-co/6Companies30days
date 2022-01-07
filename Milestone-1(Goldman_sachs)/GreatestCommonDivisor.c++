class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.size()>str2.size())
            swap(str1,str2);
        int k;
       
        for(k=str1.size();k>=1;k--){
            if(str1.size()%k!=0)continue;
            if(str2.size()%k!=0)continue;
        
        string sb = str1.substr(0,k);
        int flag = 0;
        for(int i=0;i<str1.size();i+=k){
           if(str1.substr(i,k)!=sb){
               flag = 1;
               break;
           } 
        }
        if(flag==1)continue;
        for(int i=0;i<str2.size();i+=k){
           if(str2.substr(i,k)!=sb){
               flag = 1;
               break;
           } 
        }
        if(flag==1)continue;
        return sb;
        }
        return "";
    }
};
