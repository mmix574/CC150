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
    	if(start>end) return false;
    	int mid = (start+end)/2;
    	int midValue = A[mid];
    	if(start==end&&A[start]==start){
    		return true;
    	}
    	int left = 0;
    	int right = 0;
    	if(start<mid){
	    	if(midValue>=A[start]){
    			left = Core(A,start,mid);
			}
			if(left) return true;
    	}
    	if(mid<end){
	    	if(midValue<=A[end]){
    			right = Core(A,mid,end);
			}
    		if(right) return true;
    	}
    	return false;
    }
};

int main(){
	// vector<int> data_set = {0,0,1,1,3,4,5,6,6,8,9,9,11,11,11,11,12,14,14,14,14,16,18,18,18,20,20,22,24,24,24,26,28,30,30,32,32,32};
	vector<int> data_set = {1,2,3,4,5,6,6};
	MagicIndex m;
	if(m.findMagicIndex(data_set,data_set.size())){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}