class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    for(int i=0;i<n-1;i++){
	        int nutMin = i;
	        int boltMin = i;
	        for(int j=i+1;j<n;j++){
	            if(nuts[j]<nuts[nutMin]){
	                nutMin = j;
	            }
	             if(bolts[j]<bolts[boltMin]){
	                boltMin = j;
	            }
	        }
	        swap(nuts[i],nuts[nutMin]);
	        swap(bolts[i],bolts[boltMin]);
	    }
	    
	}

};
