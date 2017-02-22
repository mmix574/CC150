#include <iostream>
#include <vector>
using namespace std;

class Render {
public:
    vector<int> renderPixel(vector<int> screen, int x, int y) {
    	int start = x/8;
    	int end = y/8;
    	if(start==end){
    		int c = 0;
    		for (int i = 0; i < end-start+1; ++i)
    		{
    			c=c<<1;
    			c=c|1;
    		}
    		c=c<<start;
    		screen[start] = c;
    		return screen;
    	}else{
	    	screen[start] = (0x7FFFFFFF)<<(x-start*8);
	    	int c = y-end*8;
	    	int color = 0x0000000;
	    	for (int i = 0; i < c; ++i)
	    	{
	    		color = (color<<1);
	    		color = color|0x0000001;
	    	}
	    	screen[end] = color;
	    	for (int i = start+1; i <end ; ++i)
	    	{
	    		screen[i] = 255;
	    	}
    	}
    }
};

int main(){
	vector<int> test_case = {0,0};
	Render r;
	test_case=r.renderPixel(test_case,7,7);
	for (int i = 0; i < test_case.size(); ++i)
	{
		cout<<test_case[i]<<endl;
	}
	return 0;
}