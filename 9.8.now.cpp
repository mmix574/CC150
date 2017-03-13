#include <iostream>
using namespace std;

class Coins {
public:
	int A[100000] = {0};
	//25 10 5 1
    int countWays(int n) {
    	int res;
    	if(A[n]){
    		return 0;
    	}else{
    		if(n>=25){
    			res = countWays(n-25)+countWays(n-10)+countWays(n-5)+countWays(n-1);
    		}else if(n>=10){
    			res = countWays(n-10)+countWays(n-5)+countWays(n-1);
    		}else if(n>=5){
    			res = countWays(n-5)+countWays(n-1);
    		}else if(n>=0){
    			res = 1;
    		}else{
    			return 0;
    		}
    	}
    	A[n] = res;
    	return res;
    }
};

int main(){
	Coins c;
	cout<<c.countWays(6)<<endl;
	return 0;
}