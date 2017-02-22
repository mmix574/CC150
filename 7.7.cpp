# include <iostream>
# include <vector>
using namespace std;

class KthNumber {
public:
	vector<int> A;
	KthNumber(){
		A.push_back(1);
	}
    int findKth(int k) {
    	int p3 = 0;
    	int p5 = 0;
    	int p7 = 0;
    	while(A.size()<=k){
    		int three = A[p3]*3;
    		int five = A[p5]*5;
    		int seven = A[p7]*7;
    		if(three<=five&&three<=seven){
    			if(A[A.size()-1]!=three){
    				A.push_back(three);
    			}
    			p3++;
    		}else if(five<=three&&five<=seven){
    			if(A[A.size()-1]!=five){
    				A.push_back(five);
    			}
    			p5++;
    		}else{
    			if(A[A.size()-1]!=seven){
    				A.push_back(seven);
    			}
    			p7++;
    		}
    	}
    	return A[k];
    }
};

int main(){
	return 0;
}