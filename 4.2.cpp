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
    	if(BFS(a,b)||BFS(b,a)){
    		return true;
    	}else{
    		return false;
    	}
    }
    bool BFS(UndirectedGraphNode *a,UndirectedGraphNode *b){
    	bool visited[1000] = {false};
    	queue<UndirectedGraphNode *> q;
    	q.push(a);
    	while(!q.empty()){
    		UndirectedGraphNode *cur = q.front();
    		q.pop();
    		if(cur==b){
    			return true;
    		}
    		if(!visited[cur->label]){
    			visited[cur->label]=true;
    			for (int i = 0; i < (cur->neighbors).size(); ++i)
    			{
    				q.push((cur->neighbors)[i]);
    			}
    		}
    	}
    	return false;
    }
};

int main(){
	return 0;
}