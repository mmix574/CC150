#include <iostream>
#include <vector>
using namespace std;

class Render {
public:
    vector<int> renderPixel(vector<int> screen, int x, int y) {

    }
};

int main(){
	vector<int> test_case = {0,0};
	Render r;
	test_case=r.renderPixel(test_case,6,8);
	for (int i = 0; i < test_case.size(); ++i)
	{
		cout<<test_case[i]<<endl;
	}
	return 0;
}