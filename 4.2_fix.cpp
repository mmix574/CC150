#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct UndirectedGraphNode {
    int label;
    vector<struct UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {}
};

class Path {
public:
    bool checkPath(UndirectedGraphNode* a, UndirectedGraphNode* b) {
    	if(AtoB(a,b)||AtoB(b,a)){
    		return true;
    	}else{
    		return false;
    	}
    }
    bool AtoB(UndirectedGraphNode *a,UndirectedGraphNode *b){
    	if(a==b){
    		return true;
    	}else{
    		bool visited[1000]={0};
    		queue<UndirectedGraphNode *> q;
    		q.push(a);
    		while(!q.empty()){
    			UndirectedGraphNode *cur = q.front();
    			q.pop();
    			visited[cur->label]=true;
    			if(cur==b){
    				return true;
    			}else{
    				if(!visited[cur->label]){
	    				for (int i = 0; i < (cur->neighbors).size(); ++i)
	    				{
	    					q.push((cur->neighbors)[i]);
	    				}
    				}
    			}
    		}
    	}
    	return false;
    }
};

int main(){
	return 0;
}