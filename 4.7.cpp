#include <iostream>

using namespace std;

class LCA {
public:
    int getLCA(int a, int b) {
    	if(a>b){
    		return getLCA(b,a);
    	}
    	//a 总是比较小于等于b;
    	if(a==b){
    		return a;
    	}else if(a/2==b/2){
    		return a/2;
    	}else{
    		return getLCA(a,b/2);
    	}
    }
};

int main(){
	return 0;
}