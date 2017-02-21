# include <iostream>
# include <vector>
# include <stdlib.h>
using namespace std;


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class TreeLevel {
public:
	bool reach = false;
	vector<int> list;
	ListNode *merge(){
		ListNode *head = NULL;
		ListNode *tail = NULL;
		for (int i = 0; i < list.size(); ++i)
		{
			if(!head){
				head=tail=(ListNode *)malloc(sizeof(ListNode));
				head->val=list[i];
				head->next=NULL;
			}else{
				tail->next=(ListNode *)malloc(sizeof(ListNode));
				tail=tail->next;
				tail->val=list[i];
				tail->next=NULL;
			}
		}
		return head;
	}
    ListNode* getTreeLevel(TreeNode* root, int dep) {
		getTreeLevelCore(root,dep);
		return merge();
    }
    void getTreeLevelCore(TreeNode* root, int dep){
    	if(dep==0){
    		return;
    	}else if(dep==1){
    		list.push_back(root->val);
    	}else{
    		getTreeLevelCore(root->left,dep-1);
    		getTreeLevelCore(root->right,dep-1);
    	}
    }
};

int main(){
	return 0;
}