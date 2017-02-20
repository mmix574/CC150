#include <iostrem>

using namespace std;

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        struct ListNode * t = pListHead;

        int len = 0;
        if(t){
            while(t->next!=NULL){
                len++;
                t=t->next;
            }
            len++;
        }

        if(k>len){
            return NULL;
        }else{
            int deep = len - k;
            for (int i = 0; i < deep; ++i) {
                pListHead = pListHead-> next;
            }
            return pListHead;
        }
        return NULL;
    }
};

int main(){
	return 0;
}