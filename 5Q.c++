//ugly number

class Solution{
public:	
	#define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   set<long long>set1;
	    set1.insert(1);
	    long  long res;
	    
	    while(n--){
	        auto it=set1.begin();
	        res=*it;
	        set1.erase(it);
	        set1.insert(res*2);
	        set1.insert(res*3);
	        set1.insert(res*5);
	        
	    }
	    return res;
	}
};