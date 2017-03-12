#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Flood {
public:
	int A[100][100];
	Flood(){
		for (int i = 0; i < 100; ++i)
		{
			for (int j = 0; j < 100; ++j)
			{
				A[i][j] = 0;
			}
		}
	}
    int floodFill(vector<vector<int> > map, int n, int m) {
    	return fill(map,n-1,m-1);
    }
    int fill(vector<vector<int> > &map,int x,int y){
    	int res;
    	if(x==0&&y==0){
    		return 0;
    	}else if(x==0){
    		if(A[x][y-1]){
    			return 1+A[x][y-1];
    		}else{
	    		res = fill(map,x,y-1)+1;
    		}
    	}else if(y==0){
    		if(A[x-1][y]){
    			return 1+A[x-1][y];
    		}else{
    			res = 1+fill(map,x-1,y);
    		}
    	}else{
    		if(map[x][y-1]==1||map[x-1][y-1]==1){
    			if(map[x][y-1]==1){
    				if(A[x-1][y]){
    					return 1+A[x-1][y];
    				}else{
    					res = 1+fill(map,x-1,y);
    				}
    			}else{
    				if(map[x][y-1]){
    					return 1+A[x][y-1];
    				}else{
    					res =1+fill(map,x,y-1); 
    				}
    			}
    		}else{
	    		int a = fill(map,x,y-1);
    			int b = fill(map,x-1,y);
    			res =  a<b?a+1:b+1;
    		}
    	}
    	A[x][y] = res;
    	return res;
    }
};
int main(){

	return 0;
}