//run length encoding
string encode(string src)
{     
  //Your code here 
  string ans = "";
  int count = 1;
  int i;
  for( i=1;i<src.length();i++){
      if(src[i-1]==src[i]){
          count++;
          
      }
      else{
          ans += src[i-1];
          ans += to_string(count);
          count = 1;
      }
  }
  ans += src[i-1] + to_string(count);
  return ans;
}     
 