#include <iostream>
#include <vector>
using namespace std;

class MagicIndex {
public:
    bool findMagicIndex(vector<int> A, int n) {
    	for (int i = 0; i < n;)
    	{
    		if(A[i]==i) return true;
    		else{
    			i = A[i] > i+1?A[i]:i+1;
    		}
    	}
    	return false;
    }	
};

int main(){
	// vector<int> data_set = {0,0,1,1,3,4,5,6,6,8,9,9,11,11,11,11,12,14,14,14,14,16,18,18,18,20,20,22,24,24,24,26,28,30,30,32,32,32};
	vector<int> data_set = {1,2,2,4,5,6,7};
	MagicIndex m;
	if(m.findMagicIndex(data_set,data_set.size())){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}