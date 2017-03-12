#include <iostream>
using namespace std;

class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
    	int left = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if(A[i]=='('){
				left++;
    		}else if(A[i]==')'){
    			if(left){
    				left--;
    			}else{
    				return false;
    			}
    		}else{
    			return false;
    		}
    	}
    	if(left){
    		return false;
    	}else{
    		return true;
    	}
    }
};
int main(){

}