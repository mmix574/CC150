#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Zipper {
public:
    string zipString(string iniString) {
    	string result;
    	char cur;
    	int count = 0;
    	for (int i = 0; i < iniString.length(); ++i)
    	{
    		if(i==0){
    			result+=iniString[0];
    			cur = iniString[0];
    			count = 1;
    		}else{
    			if(iniString[i]==cur){
    				count ++;
    			}else{
    				stringstream ss;
    				ss<<count;
    				result+=ss.str();
					// result+=(char)(count+'0'-0);
					count = 1;
					result+=iniString[i];
					cur = iniString[i];    				
    			}
    		}
    	}
		stringstream ss;
		ss<<count;
		result+=ss.str();
    	return iniString.length()<result.length()?iniString:result;
    }
};

int main(){
	Zipper z;
	cout<<z.zipString("jjjjjjxxxxxxxooZLLLLLLLLQQQQQQQQQLLLLLLLLECXXXXXXXIIIIIIIIIhjjyyySSooooooooommmuuEEEEEEEEEnnnnnnnffffffAAAAAllllllllbbbbkkkkkkkkkkkkKKKKKKhhhhhhhhhooooooooooYCCCCCCOOOOOOOOOMMMMMMMMMMiiiiiivvvvvvvWWWWkkkkkkwwwwwwwMmmmmmmmmLLLwwwwwwwkkkjjjjjjttttQQQQQQQQQaaaaaaaFFFFFFFlllllllllggggggggggPPPPPPuuuuuuuuaYYYYYYwQQQFFFFFFFFFFaaaaapXXXXXXXxxxxxxQQQQQQQQQsssssGGGGfffffffddddddpppQQQQQQHHHTTTaaaaaaGGGGGGddyyyyyMhhllllllllllNNNNNNNNUUUWWWWWWLLLLLLLLLYYYYYYYYYYTTKKKKKKKKiiiiiiitttttttXXXXXXXXXLLLHZZZZZZZssssjjJJJEEEEEOOOOOttttttttttBBttttttTTTTTTTTTTrrrrttttRRRRRyyooooooaaaaaaaaarrrrrrrPPPPPPPjjPPPPddddddddddHHHHnnnnnnnnnnSSSSSSSSSSzzHHHHHHHHHddddddDDDzzzhhhhhfffffffffftttttteeeeeeeeEEEEEEEEEaaaaaaccccccccccFFFFFFFF")<<endl;
	
	// string s = "hello world";
	// stringstream ss;
	// ss<<13;
	// s+=ss.str();
	// ss<<15;
	// s+=ss.str();
	// cout<<s<<endl;
	return 0;
}