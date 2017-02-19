#include <iostream>
#include <string>
using namespace std;

class Reverse {
public:
    string reverseString(string iniString) {
    	int len = iniString.length();
    	for (int i = 0; i < len/2; ++i)
    	{
    		swap(iniString[i],iniString[len-i-1]);
    	}
    	return iniString;
    }
};

int main(){
	Reverse R;
	string s = "hello world";
	cout<<R.reverseString(s)<<endl;
	return 0;
}