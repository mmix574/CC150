#include <iostream>
using namespace std;

class Queens {
public:
	int A[11][2][2];
	Queens(){
		for (int i = 0; i < 11; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				for (int k = 0; k < 2; ++k)
				{
					A[i][j][k] = 0;
				}
			}
		}
	}
    int nQueens(int n) {
		return core(n,0,0); 		
    }
    int core(int n,int left,int right){
    	if(A[n][left][right]) return A[left][right];
    	int res;

    	
    	return res;
    }
};

int main(){
	Queens q;
	cout<<q.nQueens(1)<<endl;
}