#include <iostream>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Remove {
public:
    bool removeNode(ListNode* pNode) {
    	if(pNode->next){return true;}
    	else{return false;}
    }
};

int main(){
	return 0;
}