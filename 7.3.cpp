#include <iostream>

using namespace std;

class CrossLine {
public:
    bool checkCrossLine(double s1, double s2, double y1, double y2) {
    	if(s1==s2&&y1==y2){
    		return true;
    	}else if(s1!=s2){
    		return true;
    	}else{
    		return false;
    	}
    }
};

int main(){
	return 0;
}