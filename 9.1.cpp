#include <iostream>
using namespace std;

class GoUpstairs {
public:
	int buf[100000];
	GoUpstairs(){
		for (int i = 0; i < 100000; ++i)
		{
			buf[i] = 0;
		}
	}
    int countWays(int n) {
    	int a,b,c;
    	if(n<=0){
    		return 0;
    	}else if(n==1){
    		buf[1] = 1;
    		return 1;
    	}else if(n==2){
    		buf[2] = 2;
    		return 2;
    	}else if(n==3){
    		buf[3] = 4;
    		return 4;
    	}else{
    		if(buf[n-3]){
    			a = buf[n-3];
    		}else{
	    		a = (countWays(n-3))%1000000007;
    		}
    		if(buf[n-2]){
    			b = buf[n-2];
    		}else{
    			b = (countWays(n-2))%1000000007;
    		}
    		if(buf[n-1]){
    			c = buf[n-1];
    		}else{
	    		c = (countWays(n-1))%1000000007;
    		}
    		buf[n] = ((a+b)%1000000007+c)%1000000007;
    		return ((a+b)%1000000007+c)%1000000007;
    	}
    }
};

int basic(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	return basic(n-1)+basic(n-2)+basic(n-3);
}

int main(){
	GoUpstairs g;
	cout<<g.countWays(36196)<<endl;
	return 0;
}