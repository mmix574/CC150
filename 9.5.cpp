#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Permutation {
public:
    vector<string> getPermutation(string A) {
    	vector<string> res;
    	int len = A.length();
    	// sort(A.begin(),A.end());
    	if(len==1){
    		res.push_back(A);
    	}else{
    		for (int i = len-1; i >= 0 ; i--)
    		{
    			string ts;
    			ts += A[i];

    			string ns = string(A);
    			ns.erase(ns.begin()+i);
    			vector<string> t_str_set = getPermutation(ns);
    			for (int i = 0; i < t_str_set.size(); ++i)
    			{
    				res.push_back(ts+t_str_set[i]);
    			}
    		}
    	}
    	sort(res.begin(),res.end());
    	reverse(res.begin(),res.end());
    	return res;
    }
};

int main(){
	Permutation p;
	vector<string> res = p.getPermutation("XXN");
	for (int i = 0; i < res.size(); ++i)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}