#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int len(int x){
	int len = 0;
	while(x>>len){
		len++;
	}
	return len;
}

void print(int x){
	int l = len(x);
	for (int i = l-1; i >=0 ; i--)
	{
		printf("%d ",(x>>i)&1);
	}
	printf("\n");
}

class CloseNumber {
public:
	int get(int x,int p){
		return (x>>p)&1;
	}
	int swap(int x,int p){
		if((x>>p)&1){
			int c = 1;
			c = ~(c<<p);
			return x&c;
		}else{
			int c =1;
			c = c<<p;
			return x|c;
		}
	}
	int lumpsup(int x,int before){
		int c = 0;
		for (int i = 0; i < before; ++i)
		{
			if((x>>i)&1){
				c++;
			}
		}
		int t = 0;
		for (int i = 0; i < c; ++i)
		{
			t = t<<1;
			t = t|1;
		}
		t = t<<(before-c);
		x=x>>before;
		x=x<<before;
		return x|t;
	}
	int getBigger(int x){
		int p = 0;
		while(!((x>>p)&1)){
			p++;
		}
		while((x>>p)&1){
			p++;
		}
		x = swap(x,p);
		x = swap(x,--p);
		return x;
	}
	int getSmaller(int x){
		int p = 0;
		while((x>>p)&1){
			p++;
		}
		while(!((x>>p)&1)){
			p++;
		}
		x = swap(x,p);
		x = swap(x,--p);
		x = lumpsup(x,p);
		return x;
	}
    vector<int> getCloseNumber(int x) {
    	vector<int> res;
    	res.push_back(getSmaller(x));
    	res.push_back(getBigger(x));
    	return res;
    }
};

int main(){
	CloseNumber c;
	// case 1
	// print(76351);
	// print(76284);
	// print(76383);

	// print(c.lumpsup(131,7));
	// printf("%d\n",c.getSmaller(76351));
	// 96502
	print(96502);
	print(96501);
	print(96505);
	print(96506);

	// return 0;



//76351
// 对应输出应该为:
// [76284,76383]
}