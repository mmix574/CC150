#include <iostream>

using namespace std;


typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
}TreeNode;

class Checker {
public:
	vector<int> order;
    bool checkBST(TreeNode* root) {
    	inOrderTraverse(root);
    	if(checkOrder()){
    		return true;
    	}else{
    		return false;
    	}
    }
    void visit(TreeNode *p){
    	if(!p) return ;
    	order.push_back(p->val);
    }
    bool checkOrder(){
    	for (int i = 0; i < order.size()-1; ++i)
    	{
    		if(order[i]>order[i+1]){
    			return false;
    		}
    	}
    	return true;
    }
    void inOrderTraverse(TreeNode* root){
    	if(!root) return ;
    	else{
    		inOrderTraverse(root->left);
    		visit(root);
    		inOrderTraverse(root->right);
    	}
    }
};

int main(){
	return 0;
}