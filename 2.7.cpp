#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Palindrome {
public:
    bool isPalindrome(ListNode* pHead) {
    	vector<int> data;
    	while(pHead){
    		data.push_back(pHead->val);
    		pHead=pHead->next;
    	}
    	int len = data.size();
    	for (int i = 0; i < len/2; ++i)
    	{
    		if(data[i]!=data[len-1-i]){
    			return false;
    		}
    	}
    	return true;
    }
};


int main(){
	return 0;
}