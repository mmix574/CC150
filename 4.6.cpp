#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

class Successor {
public:
	vector<TreeNode *>list;
    int findSucc(TreeNode* root, int p) {
    	inOrderTraverse(root);
		for (int i = 0; i < list.size()-1; ++i)
		{
			if(list[i]->val==p){
				return list[i+1]->val;
			}
		}
		return -1;
    }
    void visit(TreeNode *root){
		if(!root) return ;
		list.push_back(root);    	
    }
    void inOrderTraverse(TreeNode *root){
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