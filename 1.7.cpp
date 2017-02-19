#include <iostream>
#include <vector>
using namespace std;

class Clearer {
public:
    vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
    	int *row_modify=(int *)malloc(sizeof(int)*n);
    	int *col_modify=(int *)malloc(sizeof(int)*n);
		for (int i = 0; i < n; ++i){
    		for (int j = 0; j < n; ++j){
    			if(mat[i][j]==0){
    				row_modify[i]=1;
    				col_modify[j]=1;
    			}
    		}
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		if(row_modify[i]==1){
    			for (int j = 0; j < n; ++j)
    			{
    				mat[i][j]=0;
    			}
    		}
    		if(col_modify[i]==1){
    			for (int j = 0; j < n; ++j)
    			{
    				mat[j][i]=0;
    			}
    		}
    	}
    	return mat;
	}
};

int main(){
	return 0;
}