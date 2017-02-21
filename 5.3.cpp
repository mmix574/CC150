#include <iostream>
#include <vector>

using namespace std;
class CloseNumber {
public:
    vector<int> getCloseNumber(int x) {
    	vector<int> res;
    	//smaller
    	int t = x;
    	int oneCount = 0;
    	while(t){
    		if(t&1){
	    		oneCount++;
    		}
    		t=t>>1;
    	}
    	t = 0;
    	for (int i = 0; i < oneCount; ++i)
    	{
    		t=t<<1;
    		t=t|1;
    	}
    	res.push_back(t);


    	//bigger
    	t = x;
    	int a = 1;
    	int b = 1;
    	while((a|t)||!(t&b)){
    		a=(a<<1);
    		b=(b<<1);
    		b=b|1;
    	}
    	t=t|a;
    	res.push_back(t);    	
    	return res;
    }
};
int main(){
	CloseNumber c;
	vector<int> res = c.getCloseNumber(5);
	for (int i = 0; i < res.size(); ++i)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}