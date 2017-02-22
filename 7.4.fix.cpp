#include <iostream>
using namespace std;

class AddSubstitution {
public:
	int abs(int a){
		if(a<0){
			return -a;
		}else{
			return a;
		}
	}

	// 1为求a ＊ b，0为求a ／ b，-1为求a － b。
    int calc(int a, int b, int type) {
    	switch(type){
    		case 1:
    			// *
    			if(b>0){
					return calc(a+a,calc(b,1,-1),0);
    			}else{
    				return calc(a+a,calc(b,1,-1),0)
    			}
    			break;
    		case 0:
    			// /
    			break;
			case -1:
				// - 
				return a+~b+1;
    			break;
    		default:
    			break;

    	}
    }
};

int main(){
	AddSubstitution a;
	// cout<<a.calc(2,3,1)<<endl;
	// cout<<a.calc(6,3,0)<<endl;
	cout<<a.calc(2,3,-1)<<endl;
	return 0;
}