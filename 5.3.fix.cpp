#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;
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
    vector<int> getCloseNumber(int x) {
    	vector<int> res;
    	int i = 0;
    	// bigger
    	while(!get(x,i)){i++;}
    	int first_one = i; 
    	while(get(x,i)){i++;}
    	int first_zero = i;
    	int bigger = x;
    	bigger = swap(bigger,first_zero);
    	bigger = swap(bigger,first_one);

    	// printf("%d\n",first_one);
    	// printf("%d\n",first_zero);
    	// printf("%d\n",bigger);
    	//smaller
    	i = 0;
    	while(get(x,i)){
    		i++;
    	}
    	first_zero = i;
    	while(!get(x,i)){
    		i++;
    	}
    	first_one = i;
    	int smaller = x;
    	smaller=swap(smaller,first_one);
    	smaller=swap(smaller,first_one-1);
    	i = i-2;
    	int j = 0;
    	if(!get(x,i)){
    		smaller=swap(smaller,i--);
    		smaller=swap(smaller,j++);
    	}
    	res.push_back(smaller);
    	res.push_back(bigger);
    	return res;
    }
};
int main(){
	CloseNumber c;
	vector<int> res = c.getCloseNumber(76351);
	for (int i = 0; i < res.size(); ++i)
	{
		cout<<res[i]<<endl;
	}
	return 0;
//76351
// 对应输出应该为:
// [76284,76383]
}