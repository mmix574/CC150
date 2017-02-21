#include <iostream>

using namespace std;
class MinimalBST {
public:
    int buildMinimalBST(vector<int> vals) {
    	int count = vals.size();
    	int i = 1;
    	int sum = 2;
    	if(count==0){
    		return 0;
    	}else{
    		while(sum<count){
    			i++;
    			sum*=2;
    		}
    		return i;
    	}
    }
};

int main(){
	return 0;
}