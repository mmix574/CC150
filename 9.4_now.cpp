#include <iostream>
#include <vector>

using namespace std;

class Subset {
public:
    vector<vector<int> > getSubsets(vector<int> A, int n) {
    	vector<vector<int>> res;
    	if(n==1){
    		res.push_back(A);
    	}
    	for (int i = n-1; i >= 0; i--)
    	{
    		int t_int = A[i];
    		vector<int > t = vector<int>(A);
    		t.erase(t.begin()+i);
    		vector<vector<int>> t_res = getSubsets(t,t.size());
    		for (int j = 0; j < t_res.size(); ++j)
    		{
    			t_res[i].insert(t_res[i].begin(),t_int);
    			res.push_back(t_res[i]);
    		}
    	}
    	return res;
    }
};

void print(vector<int> &data){
	for (int i = 0; i < data.size(); ++i)
	{
		cout<<data[i];
		cout<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> data = {123,456,789};
	Subset s;
	vector<vector<int>>res =  s.getSubsets(data,data.size());
	// for (int i = 0; i < res.size(); ++i)
	// {
	// 	print(res[i]);
	// }
	return 0;
}