#include <iostream>
#include <vector>
using namespace std;
/*
链接：https://www.nowcoder.com/practice/69f0ffed01c741c5ae5594a23f7cd739?tpId=8&tqId=11007&tPage=1&rp=1&ru=/ta/cracking-the-coding-interview&qru=/ta/cracking-the-coding-interview/question-ranking
来源：牛客网

测试用例:
[[1,97868],[1,69995],[1,28525],[1,72341],[1,86916],[1,5966],[2,58473],[2,93399],[1,84955],[1,16420],[1,96091],[1,45179],[1,59472],[1,49594],[1,67060],[1,25466],[1,50357],[1,83509],[1,39489],[2,51884],[1,34140],[1,8981],[1,50722],[1,65104],[1,61130],[1,92187],[2,2191],[1,2908],[1,63673],[2,92805],[1,29442]],2

对应输出应该为:

[[97868,69995],[28525,72341],[84955,16420],[96091,45179],[59472,49594],[67060,25466],[50357,83509],[34140,8981],[50722,65104],[61130,2908],[29442]]

*/



class SetOfStacks {
public:
    vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
    	vector<int> stack;
    	for (int i = 0; i < ope.size(); ++i)
    	{
    		if(ope[i][0]==1){
    			stack.push_back(ope[i][1]);
    		}else{
    			stack.erase(stack.end());
    		}
    	}
    	vector<vector<int>> r;
    	for (int i = 0; i < stack.size(); i+=size)
    	{
    		vector<int > t;
    		for (int j = 0; j < size; ++j)
    		{
    			if(i+j>=stack.size()){
    				if(t.size()){r.push_back(t);}
    				return r;
    			}
    			t.push_back(stack[i+j]);
    		}
    		r.push_back(t);
    	}
    	return r;
    }
};
int main(){
	vector<vector<int>> = [[1,2],[3,4]];
	return 0;
}