#include <iostream>
#include <vector>
using namespace std;

class CatDogAsylum {
public:
    vector<int> asylum(vector<vector<int> > ope) {
    	vector<int> res;
    	vector<int> animal;
    	for (int i = 0; i < ope.size(); ++i)
    	{
    		int operate = ope[i][0];
    		int label = ope[i][1];
    		if(operate==1){
    			animal.push_back(label);
    		}else if(operate==2){
    			if(label==0){
    				if(animal.size()){
    					res.push_back(animal[0]);
    					animal.erase(animal.begin());
    				}
    			}else if(label==-1){
    				if(animal.size()){
    					for (int j = 0; j < animal.size(); ++j)
    					{
    						if(animal[j]<0){
    							res.push_back(animal[j]);
    							animal.erase(animal.begin()+j);
    							break;
    						}
    					}
    				}
    			}else if(label==1){
    				if(animal.size()){
    					for (int j = 0; j < animal.size(); ++j)
    					{
    						if(animal[j]>0){
    							res.push_back(animal[j]);
    							animal.erase(animal.begin()+j);
    							break;
    						}
    					}
    				}
    			}else{
    				continue;
    			}
    		}else{
    			continue;
    		}
    	}
    	return res;
    }
};

int main(){

	return 0;
}