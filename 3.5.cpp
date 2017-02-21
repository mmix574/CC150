#include <iostream>
using namespace std;

class Solution
{
public:
    void push(int node) {
        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
        stack1.push(node);
    }
    int pop() {
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
        if(stack2.empty()){
            return -1;
        }else{
            int r =  stack2.top();
            stack2.pop();
            return r;
        }
    }
private:
    stack<int> stack1;
    stack<int> stack2;
};

int main(){
	return 0;
}