#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class TwoStacks {
public:
    vector<int> twoStacksSort(vector<int> numbers) {
    	stack<int> origin;
    	stack<int> support;
    	for (int i = 0; i < numbers.size(); ++i)
    	{
    		origin.push(numbers[i]);
    	}
    	while(!origin.empty()){
    		int top = origin.top();
    		origin.pop();
    		if(support.empty()||support.top()<=top){
    			support.push(top);
    		}else{
    			while(!support.empty()&&support.top()>top){
    				origin.push(support.top());
    				support.pop();
    			}
    			support.push(top);
    		}
    	}
    	vector<int> res ;
    	while(!support.empty()){
    		res.push_back(support.top());
    		support.pop();
    	}
    	return res;
    }
};

int main(){
	int test[] = {1,2,3,4,5};
	vector<int> test_data(test,test+5);
	TwoStacks t;
	vector<int> r = t.twoStacksSort(test_data);
	for (int i = 0; i < r.size(); ++i)
	{
		cout<<r[i]<<" "<<endl;
	}
	return 0;
}