/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class Balance {
public:
	int abs(int a){
		if(a<0){
			return -a;
		}
		else{
			return a;
		}
	}

    bool isBalance(TreeNode* root) {
    	if(!root){return true;}
    	if(abs(BanlaceFactor(root->left)-BanlaceFactor(root->right))<=1){
    		return true;
    	}
    }
    int BanlaceFactor(TreeNode *root){

    }
};