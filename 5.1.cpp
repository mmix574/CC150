# include <iostream>

using namespace std;

class BinInsert {
public:
    int binInsert(int n, int m, int j, int i) {
    	m=m<<j;
    	return n|m;
    }
};

int main(){
	BinInsert b;
	cout<<b.binInsert(1024,19,2,6)<<endl;
	return 0;
}