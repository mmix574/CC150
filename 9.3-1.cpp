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
    	// <= 剪枝
    	cout<<"start"<<start<<"end"<<end<<endl;
    	if(start>end) return false;
		int mid = (start+end)/2;
    	int midValue = A[mid];	
    	if(midValue == mid){
    		return true;
    	}else{
    		if(midValue<mid){
    			if(mid+1<=end){
    				return Core(A,mid+1,end);
    			}else{
    				return false;
    			}
    		}
    		if(midValue>mid){
    			if(start<mid){
	    			return Core(A,start,mid);
    			}else{
    				return false;
    			}
    		}
    		return false;
    	}
    }
};

int main(){
	vector<int> data_set = {-2,1,3,4,5,6,7};
	MagicIndex m;
	if(m.findMagicIndex(data_set,7)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}