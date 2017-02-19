#include <iostream>
#include <string>
using namespace std;

class Reverse {
public:
    string reverseString(string iniString) {
    	return iniString.reverse();
    }
};

int main(){
	Reverse R;
	string s = "hello world";
	cout<<r.reverseString(s)<<endl;
	return 0;
}