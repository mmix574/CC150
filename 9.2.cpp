#include <iostream>
using namespace std;
class Robot {
public:
	int A[13][13];
	Robot(){
		for (int i = 0; i < 13; ++i)
		{
			for (int j = 0; j < 13; ++j)
			{
				A[i][j] = 0;
			}
		}
	}
    int countWays(int x, int y) {
    	if(A[x][y]){
    		return A[x][y];
    	}
    	if(x==1&&y==1){
    		return 1;
    	}else if(x==1){
    		int res = countWays(x,y-1);
    		A[x][y] = res;
    		return res;
    	}else if(y==1){
    		int res = countWays(x-1,y);
    		A[x][y] = res;
    		return res;
    	}else{
    		int res = countWays(x-1,y)+countWays(x,y-1);
    		A[x][y] = res;
    		return res;
    	}
    }
};

int main(){
	Robot r;
	cout<<r.countWays(2,2)<<endl;
	return 0;
}