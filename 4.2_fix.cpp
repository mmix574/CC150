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
    	vector<UndirectedGraphNode *> visited;
    	queue<UndirectedGraphNode *> q;  	
    	q.push(a);
    	while(!q.empty()){
    		UndirectedGraphNode *p = q.front();q.pop();
    		bool isVisit = false;
    		for (int i = 0; i < visited.size(); ++i)
    		{
    			if(visited[i]==p){
    				isVisit = true;
    				break;
    			}
    		}
    		if(isVisit){
    			continue;
    		}else{
	    		if(p==b){
    				return true;
	    		}else{
		    		for (int i = 0; i < (p->neighbors).size(); ++i)
		    		{
		    			q.push((p->neighbors)[i]);
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