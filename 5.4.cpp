#include <iostream>

using namespace std;

class Transform {
public:
    int calcCost(int A, int B) {
    	int c = A^B;
    	int count = 0;
    	while(c){
    		if(c&1){
    			count++;
    		}
    		c=c>>1;
    	}
    	return count;
    }
};

int main(){
	return 0;
}