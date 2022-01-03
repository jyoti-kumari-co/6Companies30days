//overlapping rectangles
class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        //checking for completely right side or completely left side
       if((R2[0]<L1[0]) || (R1[0]<L2[0]))return 0;
       //checking for completely up side or completely down side
       else if((R1[1]>L2[1]) || (R2[1]>L1[1]))return 0;
       //checking for loverlapping completely means all the dimensions are the same
       else if((L1[0]==L2[0])&&(R1[1]==R2[1]))return 1;
       return 1;
}
};