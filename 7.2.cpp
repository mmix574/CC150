#include <iostream>

using namespace std;

class Ants {
public:
    double antsCollision(int n) {
    	if(n==0||n==1){
    		return 0;
    	}else{
    		n=n-1;
    		return 1-pow(0.5,n);
    	}
    }
};

int main(){
	return 0;
}