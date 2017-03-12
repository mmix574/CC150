#include <iostream>
#include <vector>
using namespace std;

// 您的代码已保存
// 答案错误:您提交的程序没有通过所有的测试用例
// case通过率为93.33%


class Robot {
public:
	int A[51][51];
	Robot(){
		for (int i = 0; i < 51; ++i)
		{
			for (int j = 0; j < 51; ++j)
			{
				A[i][j] = -1;
			}
		}
	}
	int countWays(vector<vector<int> > map,int x,int y){
		A[0][0] = 1;
		return countWaysz(map,x-1,y-1);
	}
    int countWaysz(vector<vector<int> > &map, int x, int y) {
    	if(A[x][y]!=-1){
    		return A[x][y];
    	}
    	if(x==0&&y==0){
    		return 1;
    	}else if(x==0){
    		if(map[x][y-1]!=1){
    			//无效路径
    			A[x][y-1] = 0;
    			return 0;
    		}else{
	    		int res = (countWaysz(map,x,y-1))%1000000007;
	    		A[x][y-1] = res;
	    		return res;
    		}
    	}else if(y==0){
    		if(map[x-1][y]!=1){
    			//无效路径
    			A[x-1][y] = 0;
    			return 0;
    		}else{
	    		int res = (countWaysz(map,x-1,y))%1000000007;
	    		A[x-1][y] = res;
	    		return res;
    		}
    	}else{
    		int a,b;
    		if(map[x][y-1]!=1){
    			//无效路径
    			A[x][y-1] = 0;
    			a = 0;
    		}else{
	    		a = (countWaysz(map,x,y-1))%1000000007;
	    		A[x][y-1] = a;
    		}
    		if(map[x-1][y]!=1){
    			//无效路径
    			A[x-1][y] = 0;
    			b =  0;
    		}else{
	    		b = (countWaysz(map,x-1,y))%1000000007;
	    		A[x-1][y] = b;
    		}
    		A[x][y] = (a+b)%1000000007;
    		return A[x][y];
    	}
    }
};

int main(){

	return 0;
}