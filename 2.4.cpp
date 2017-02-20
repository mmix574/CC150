#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
    	ListNode *smaller_head = NULL;
    	ListNode *smaller_tail = NULL;
    	ListNode *larger_head = NULL;
    	ListNode *larger_tail = NULL;
    	while(pHead){
    		if(pHead->val<x){
    			if(!smaller_head){
    				smaller_head=smaller_tail=pHead;
    			}else{
    				smaller_tail->next = pHead;
    				smaller_tail=smaller_tail->next;
    			}
    		}else{
    			if(!larger_head){
    				larger_head=larger_tail=pHead;
    			}else{
    				larger_tail->next = pHead;
    				larger_tail=larger_tail->next;
    			}
    		}
    		pHead=pHead->next;
    	}
    	if(smaller_head){
	    	smaller_tail->next=larger_head;
    	}
    	if(larger_head){
	    	larger_tail->next = NULL;
    	}
    	if(smaller_head){
    		return smaller_head;
    	}else{
    		return larger_head;
    	}
    }
};

int main(){
	return 0;
}