#include <iostream>
#include <string>
using namespace std;

// class Replacement {
// public:
    // string replaceSpace(string iniString, int length) {
    // 	int spaceCount = 0;
    // 	for (int i = 0; i < length; ++i)
    // 	{
    // 		if(iniString[i]==' '){
    // 			spaceCount++;
    // 		}
    // 	}
    // 	for (int i = length-1; i >=0 ; i--)
    // 	{
    // 		iniString[2*spaceCount+i] = iniString[i];
    // 		if(iniString[i]==' '){
    // 			iniString[2*spaceCount+i] = '0';
    // 			iniString[2*spaceCount+i-1] = '2';
    // 			iniString[2*spaceCount+i-2] = '%';
    // 			spaceCount--;
    // 		}
    // 	}
    // 	return iniString;
    // }
class Replacement {
	public:
    string replaceSpace(string iniString, int length) {
    	string r;
    	for (int i = 0; i < length; ++i)
    	{
    		if(iniString[i]==' '){
    			r+="%20";
    		}else{
    			r+=iniString[i];
    		}
    	}
    	return r;
    }
};

int main(){
	Replacement r;
	string s="Hello world ";
	s.resize(1000);
	cout<<r.replaceSpace(s,12)<<endl;
	return 0;
}