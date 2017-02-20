#include <iostream>

using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Plus {
public:
    ListNode* plusAB(ListNode* a, ListNode* b) {

    	int advance = 0;
    	ListNode * r=NULL;
    	ListNode * r_tail=NULL;
		int t_sum;
    	while(a&&b){
    		t_sum = a->val+b->val+advance;
    		if(t_sum>10){
    			advance = 1;
    		}else{
    			advance = 0;
    		}
    		if(!r){
    			r = r_tail = (ListNode*)malloc(sizeof(ListNode));
    			r->val = t_sum%10;
    			r->next = NULL;
    		}else{
    			r_tail->next = (ListNode *)malloc(sizeof(ListNode));
    			r_tail=r_tail->next;
    			r_tail->val = t_sum%10; 
    			r_tail->next = NULL;
    		}
    		a=a->next;
    		b=b->next;
    	}
    	while(a){
    		t_sum = a->val+advance;
    		if(t_sum>10){
    			advance = 1;
    		}else{
    			advance = 0;
    		}
    		if(!r){
    			r = r_tail = (ListNode*)malloc(sizeof(ListNode));
    			r->val = t_sum%10;
    			r->next = NULL;
    		}else{
    			r_tail->next = (ListNode *)malloc(sizeof(ListNode));
    			r_tail=r_tail->next;
    			r_tail->val = t_sum%10; 
    			r_tail->next = NULL;
    		}
    	}
    	while(b){
    		t_sum = b->val+advance;
    		if(t_sum>10){
    			advance = 1;
    		}else{
    			advance = 0;
    		}
    		if(!r){
    			r = r_tail = (ListNode*)malloc(sizeof(ListNode));
    			r->val = t_sum%10;
    			r->next = NULL;
    		}else{
    			r_tail->next = (ListNode *)malloc(sizeof(ListNode));
    			r_tail=r_tail->next;
    			r_tail->val = t_sum%10; 
    			r_tail->next = NULL;
    		}
    	}
    	return r;
    }
};

int main(){
	return 0;
}