#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;
class ReverseEqual {
public:
    bool checkReverseEqual(string s1, string s2) {
    	if(s1.length()!=s2.length()){return false;}
    	int len = s1.length();
    	char * A = new char[len];
    	char * B = new char[len];
    	s1.copy(A,len);
    	s2.copy(B,len);
    	for (int i = 0; i < len; ++i)
    	{
    		if(strncmp(A+i,B,len-i)==0&&strncmp(A,B+len-i,i)==0){
    			return true;
    		}
    	}
    	return false;
    }
};

int main(){

	ReverseEqual R;
	if(R.checkReverseEqual("hehe","eheh")){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}

	// string s = "hello world";
	// char p[20];


	// s.copy(p,s.length());
	// printf("%s",p);

	// char *p = new char[10];
	// for (int i = 0; i < 10; ++i)
	// {
		// p[i]=i+'0';
	// }
	// printf("%s",p);
	// delete[] p;
	// printf("%s",p);


}