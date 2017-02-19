#include <iostream>
#include <vector>
using namespace std;

class Transform {
public:
    vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
    	vector<vector<int>> result;
    	for (int i = 0; i < n; ++i)
    	{
    		vector <int> row;
    		for (int j = 0; j < n; ++j)
    		{
    			row.push_back(mat[n-1-j][i]);
    		}
    		result.push_back(row);
    	}
    	return result;
    }
};

int main(){
	return 0;
} 