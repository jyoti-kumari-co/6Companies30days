class Solution {
public:
   
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> posRotten;
        int countFresh=0;
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
       for(int i=0;i<grid.size();i++){
           for(int j =0;j<grid[i].size();j++){
               if(grid[i][j]==2)posRotten.push({i,j});
               if(grid[i][j]==1)countFresh++;
           }
       }
        while(!posRotten.empty()){
            int any = false;
            int size = posRotten.size();
            for(int k=0;k<size;k++){
                auto top = posRotten.front();
        
            int i = top.first;
            int j = top.second;
            if(i>0 && grid[i-1][j]==1){
                grid[i-1][j]=2;
                any = true;
               countFresh--;
                 posRotten.push({i-1,j});
                }
            if(j>0 && grid[i][j-1]==1){
                grid[i][j-1]=2;
                any = true;
                countFresh--;
                 posRotten.push({i,j-1});
}
            if(i<n-1 && grid[i+1][j]==1){
                grid[i+1][j]=2;
                any = true;
                countFresh--;
                 posRotten.push({i+1,j});
            }
            if(j<m-1 && grid[i][j+1]==1){
                grid[i][j+1]=2;
                any = true;
                countFresh--;
                 posRotten.push({i,j+1});
            }
                
                posRotten.pop();
            }
            
            if(any){
                ans++;
                any = false;
            }
        }
        
        return countFresh!=0?-1:ans;
    } 
};
