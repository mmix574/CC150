#include <iostream>

using namespace std;

class Robot {
public:
	int A[12][12] = {0};
    int countWays(int x, int y) {
    	if(x==0&&y==0){
    		return 0;
    	}
    	if(y>x){
    		return countWays(y,x);
    	}
    	if(y>0){
    		return 
    	}else{
    		//y==0
    		return countWays(x-1,y)+1;
    	}
    }
};

int main(){


	return 0;
}