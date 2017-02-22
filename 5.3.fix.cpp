#include <iostream>
#include <vector>

using namespace std;
class CloseNumber {
public:
    vector<int> getCloseNumber(int x) {
    	vector<int> res;
    	//smaller
    	int t = x;
    	int c = 0x7FFFFFFE;
    	int b = 0x00000001;
    	

    	int firstZero=0;
    	while((t>>firstZero)&1){
    		firstZero++;
    	}
    	int firstOnePassZero = firstZero;
    	while(!((t>>firstOnePassZero)&1)){
    		firstOnePassZero++;
    	}
    	t=t|(b<<firstZero);
    	for (int i = 0; i < firstOnePassZero; ++i)
    	{
    		c=c<<1;
    		c=c|1;
    	}
    	t=t&c;
    	res.push_back(t);


    	//bigger
    	t = x;
    	int firstOne = 0;
    	while(!((x>>firstOne)&1)){
    		firstOne++;
    	}
    	int firstZeroPassOne = firstOne;
    	while((x>>firstZeroPassOne)&1){
    		firstZeroPassOne++;
    	}
    	t=(t>>firstZeroPassOne)|1;
    	t=(t<<firstZeroPassOne)|x;
    	c = 0x7FFFFFFE;
    	for (int i = 0; i < firstOne; ++i)
    	{
    		c=(c<<1);
    		c=c|1;
    	}
    	t=t&c;
    	res.push_back(t);    	
    	return res;
    }
};
int main(){
	CloseNumber c;
	vector<int> res = c.getCloseNumber(2);
	for (int i = 0; i < res.size(); ++i)
	{
		cout<<res[i]<<endl;
	}
	return 0;
}