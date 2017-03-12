#include <iostream>
#include <vector>
using namespace std;

class MagicIndex {
public:
    bool findMagicIndex(vector<int> A, int n) {
    	return Core(A,0,n-1);
    }	
    bool Core(vector<int> &A,int start,int end){
    	// <= 剪枝
    	
    	if(start>end) return false;
    	if(start==end&&A[start]==start){
    		return true;
    	}else{
    		int mid = (start+end)/2;
    		return Core(A,start,mid)||Core(A,mid+1,end);
    	}
    }
};

int main(){
	return 0;
}