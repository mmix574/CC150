#include <stdio.h>
#include <stdlib.h>

class Max {
public:
    int getMax(int a, int b) {
    	int A[2];
    	A[0] = a;
    	A[1] = b;
    	int c = 0;
    	int t = a-b>0||c++;
    	return A[c];
    }
};

int main(){
	Max m;
	printf("%d\n",m.getMax(2,1));
	return 0;
}