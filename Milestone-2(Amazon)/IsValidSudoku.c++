class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        set<string> m;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
               if(mat[i][j]!=0){
                    int box = (i/3)*3 + (j/3);
                string b = to_string(box);
                string elm = to_string(mat[i][j]);
                string indR = to_string(i);
                string indC = to_string(j);
                if(m.find("row"+elm+indR)==m.end()){
                    m.insert("row"+elm+indR);
                 }
                 else{
                     return false;
                 }
                 if(m.find("col"+elm+indC)==m.end()){
                    m.insert("col"+elm+indC);
                 }
                 else{
                     return false;
                 }
                 if(m.find("box"+elm+b)==m.end()){
                    m.insert("box"+elm+b);
                 }
                 else{
                     return false;
                 }
               }
            }
        } return true;
    }
};
