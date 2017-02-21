#include <iostream>

using namespace std;
class BinDecimal {
public:
    string printBin(double num) {
    	if(num==0) return "0";
    	string res = "0.";
    	double nn = 0.5;
    	for (int i = 0; i < 32; ++i)
    	{
    		if(num==0){
    			return res;
    		}
    		if(num>=nn){
    			num-=nn;
    			res+="1";
    			nn/=2;
    		}else{
    			res+="0";
    			nn/=2;
    		}
    	}
    	if(num!=0){
    		return "Error";
    	}else{
    		return res;
    	}
    }
};

int main(){
	BinDecimal b;
	double test = 0.625;
	cout<<b.printBin(test)<<endl;
	return 0;
}