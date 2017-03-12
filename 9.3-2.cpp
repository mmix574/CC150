#include <iostream>
#include <vector>
using namespace std;

class MagicIndex {
public:
    bool findMagicIndex(vector<int> A, int n) {
    	if(n<=0) return false;
    	return Core(A,0,n-1);
    }	
    bool Core(vector<int> &A,int start,int end){

    }
};

int main(){
	vector<int> data_set = {0,0,1,1,3,4,5,6,6,8,9,9,11,11,11,11,12,14,14,14,14,16,18,18,18,20,20,22,24,24,24,26,28,30,30,32,32,32};
	MagicIndex m;
	if(m.findMagicIndex(data_set,7)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}