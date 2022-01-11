void rotate(int n,int a[][n])
{
    //code here
    for(int row=0;row<n;row++){
      for(int col=row;col<n;col++){
          int num = a[row][col];
          a[row][col] = a[col][row];
          a[col][row] = num;
          
      }
    }
    int top = 0;
    int bottom = n-1;
    while(top<bottom){
        for(int col=0;col<n;col++){
          
            int num = a[top][col];
          a[top][col] = a[bottom][col];
          a[bottom][col] = num;
            
        }
        top++;
        bottom--;
    }
}
