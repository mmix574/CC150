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
    vector<UndirectedGraphNode*> l;

    bool visit(UndirectedGraphNode *p){
    	l.push_back(p);
    }
    bool isVisit(UndirectedGraphNode *p){
    	for (int i = 0; i < l.size(); ++i)
    	{
    		if(l[i]==p){
    			return true;
    		}else{
    			return false;
    		}
    	}
    	return false;
    }
    bool clearVisit(){
    	l.clear();
    }

    bool AtoB(UndirectedGraphNode *a,UndirectedGraphNode *b){
    	clearVisit();
    	queue<UndirectedGraphNode *> q;
    	q.push(a);
    	while(!q.empty()){
    		UndirectedGraphNode *p = q.front();
    		q.pop();
    		if(isVisit(p)){
    			continue;
    		}
    		if(p==b){
    			return true;
    		}
    		visit(p);
    		for (int i = 0; i < (p->neighbors).size(); ++i)
    		{
    			q.push((p->neighbors)[i]);
    		}
    	}
    	return false;
    }
};

int main(){
	return 0;
}