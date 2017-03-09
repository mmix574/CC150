#include <iostream>
using namespace std;


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
		return countWaysz(map,x-1,y-1);
	}
    int countWaysz(vector<vector<int> > &map, int x, int y) {
    	if(A[x][y]!=-1){
    		return A[x][y];
       	}else{
       		if(x==0&&y==0){
				return 1;       			
       		}else if(x==0){
       			if(map[x][y-1]){
       				int res = countWays(map,x,y-1);
       				A[x][y] = res;
       				return res;
       			}else{
       				A[x][y] = 0;
       				return 0;
       			}
       		}else if(y==0){
       			if(map[x-1][y]){
       				int res = countWays(map,x-1,y);
       				A[x][y] = res;
       				return res;
       			}else{
       				A[x][y] = 0;
       				return 0;
       			}
       		}else{
       			if(map[x-1][y]&&map[x][y-1]){
       				int res = countWays(map,x,y-1)+countWays(map,x-1,y);
       				A[x][y] = res;
       				return res;
       			}else if(map[x-1][y]){
       				int res = countWays(map,x-1,y);
       				A[x][y] = res;
       				return res;
       			}else if(map[x][y-1]){
       				int res = countWays(map,x,y-1);
       				A[x][y] = res;
       				return res;
       			}
       			else{
       				return 0;
       			}
       		}
       	}
    }
};

int main(){

	return 0;
}