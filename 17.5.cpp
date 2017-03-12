#include <iostream>
#include <vector>
using namespace std;

class Result {
public:
    vector<int> calcResult(string A, string guess) {
    	vector<int> res;
    	int len = A.length();
    	int correct = 0;
    	char countA[256] = {0};
    	char countB[256] = {0}; 
    	for (int i = 0; i < len; ++i)
    	{
    		if(A[i]==guess[i]){
    			correct++;
    		}else{
    			countA[A[i]]++;
    			countB[guess[i]]++;
    		}
    	}
    	res.push_back(correct);
    	int guess_correct = 0;
    	guess_correct+=(countA['R']<=countB['R']?countA['R']:countB['R']);
    	guess_correct+=(countA['Y']<=countB['Y']?countA['Y']:countB['Y']);
    	guess_correct+=(countA['G']<=countB['G']?countA['G']:countB['G']);
    	guess_correct+=(countA['B']<=countB['B']?countA['B']:countB['B']);
    	res.push_back(guess_correct);
    	return res;
    }
};

int main(){
	return 0;
}