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
    	return add(a,b,0);
    }
    ListNode* add(ListNode* a,ListNode *b,int ad){
    	if(a&&!b){
    		int t = a->val+ad;
    		a->val = t%10;
    		if(t>=10){
    			a->next=add(a->next,NULL,1);
    		}
    		return a;    		
    	}else if(!a&&b){
    		int t = b->val+ad;
    		b->val = t%10;
    		if(t>=10){
    			b->next=add(NULL,b->next,1);
    		}
    		return b; 
    	}else if(!a&&!b){
    		if(ad){
    			ListNode * r = (ListNode *)malloc(sizeof(ListNode));
    			r->val = ad;
    			r->next = NULL;
    			return r;
    		}else{
    			return NULL;
    		}
    	}else{
    		int t = a->val+b->val+ad;
    		a->val = t%10;
    		if(t>=10){
    			a->next=(a->next,b->next,1);
    		}else{
    			a->next=(a->next,b->next,0);
    		}
    		return a;
    	}
    }
};

int main(){
	return 0;
}