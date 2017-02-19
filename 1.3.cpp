#include <iostream>
#include <string>
using namespace std;

class Same {
public:
    bool checkSam(string stringA, string stringB) {
    	int lenA = stringA.length();
    	int lenB = stringB.length();
    	if(lenA!=lenB) return false;

    	int A_log[256]={0};int B_log[256]={0};
    	for (int i = 0; i < lenA; ++i)
    	{
    		A_log[(int)stringA[i]]++;
    		B_log[(int)stringB[i]]++;
    	}
    	for (int i = 0; i < 256; ++i)
    	{
    		if(A_log[i]!=B_log[i]){
    			return false;
    		}
    	}
    	return true;

    }
};

int main(){
	Same s;
	if(s.checkSam("This is newcoder","is This newcodes")){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}