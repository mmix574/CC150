#include <iostream>

using namespace std;

class Finder {
public:
    int findMissing(vector<vector<int> > numbers, int n) {
    	for (int i = 0; i < numbers.size(); ++i)
    	{
    		if(i%2==0){
	    		if((numbers[i][0])&1){
	    			return i;
	    		}
    		}else{
	    		if(!(numbers[i][0])&1){
	    			return i;
	    		}
    		}
    	}
    	return n;
    }
};

int main(){
	return 0;
}