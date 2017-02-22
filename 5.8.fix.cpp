#include <iostream>
#include <vector>
using namespace std;

class Render {
public:
    vector<int> renderPixel(vector<int> screen, int x, int y) {
    	int s = x / 8;
    	int e = y / 8;
    	if(s==e){
    		screen[s] = (0x7FFFFFFF>>30-(y-x))<<x%8;
    		return screen;
    	}else{
    		screen[s] = (0x7FFFFFFF>>31-(8-x%8)<<x);
    		for (int i = s+1; i < e; ++i)
    		{
    			screen[i] = 255;
    		}
    		screen[e] = ((0x7FFFFFFF)>>(30-(y%8-0)));
    	}
    	return screen;
    }
};

int main(){
	vector<int> test_case = {0,0};
	Render r;
	test_case=r.renderPixel(test_case,6,9);
	for (int i = 0; i < test_case.size(); ++i)
	{
		cout<<test_case[i]<<endl;
	}
	return 0;
}