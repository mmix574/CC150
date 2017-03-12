#include <iostream>
using namespace std;

class GoUpstairs {
public:
	int buf[100000] = {0};
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
    		if(buf[n-1]){
    			a = buf[n-1];
    		}else{
    			a = buf[n-1] = (countWays(n-1))%1000000007; 
    		}
    		if(buf[n-2]){
    			b = buf[n-2];
    		}else{
    			b = buf[n-2] = (countWays(n-2))%1000000007;

    		}
    		if(buf[n-3]){
    			c = buf[n-3];
    		}else{
    			c = buf[n-3] = (countWays(n-3))%1000000007; 
    		}
    		return (a+b+c)%1000000007;
    	}
    }
};

int main(){
	GoUpstairs g;
	g.countWays(36196);
	return 0;
}