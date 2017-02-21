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
		}else{
			return a;
		}
	}

    bool isBalance(TreeNode* root) {
    	if(!root){return true;}
    	int a = isBalanceCore(root->left);
    	int b = isBalanceCore(root->right);
    	if(!a||!b){return false;}
    	else if(abs(a-b)>1){
    		return false;
    	}else{
    		return true;
    	}
    }
    int isBalanceCore(TreeNode *root){
    	if(!root){
    		return 0;
    	}else{
    		int left = isBalanceCore(root->left);
    		int right = isBalanceCore(root->right);
    		if(abs(left-right)>1){
    			return 0;
    		}else{
    			return left>right?left+1:right+1;
    		}
    	}
    }
};