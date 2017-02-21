#include <iostream>
#include <vector>

using namespace std;
class CloseNumber {
public:
	int * intToArray(int n){
						
	}
	int arrayToInt(int A[],int len){
		int res;
		for (int i = 0; i < len; ++i)
		{
			res = (res<<1);
			res = res|A[i];
		}
		return res;
	}

    vector<int> getCloseNumber(int x) {

    }
};
int main(){
	CloseNumber c;
	c.intToArray();	
	return 0;
}