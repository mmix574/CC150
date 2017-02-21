#include <iostream>
using namespace std;

class CatDogAsylum {
public:
    vector<int> asylum(vector<vector<int> > ope) {
    	vector<int> res;
    	vector<int> animal;
    	for (int i = 0; i < ope.size(); ++i)
    	{
    		switch(ope[i][0]){
    			case 1:
    				animal.push_back(ope[i][1]);
    				break;
    			case 2:
					switch(ope[i][1]){
						case 0:
						if(animal.size()){
							res.push_back(animal[0]);
							animal.erase(animal.begin());
						}
							break;
						case 1:
							for (int j = 0; j < animal.size(); ++j)
							{
								if(animal[j]>0){
									res.push_back(animal[j]);
									animal.erase(animal.begin()+j);
								}
							}
							break;
						case -1:
							for (int j = 0; j < animal.size(); ++j)
							{
								if(animal[j]<0){
									res.push_back(animal[j]);
									animal.erase(animal.begin()+j);
								}
							}
							break;
						default:
							break;
					}    				
    				break;
    			default:
    				break;
    		}
    	}
    	return res;
    }
};

int main(){

	return 0;
}