#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
    Point() :
            x(0), y(0) {
    }
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
};
class Bipartition {
public:
	void Border(vector<Point> &A,int *up,int *down,int *left,int *right){
		int u = A[0].y;
		int d = A[0].y;
		int l = A[0].x;
		int r = A[0].x;
		for (int i = 0; i < A.size(); ++i)
		{
			if(u<A[i].y){
				u = A[i].y;
			}
			if(d>A[i].y){
				d = A[i].y;
			}
			if(l>A[i].x){
				l = A[i].x;
			}
			if(r<A[i].x){
				r = A[i].x;
			}
		}
		*(up) = u;
		*(down) = d;
		*(left) = l;
		*(right) = r;
	}
    vector<double> getBipartition(vector<Point> A, vector<Point> B) {
    	int Au,Ad,Al,Ar;
    	Border(A,&Au,&Ad,&Al,&Ar);
    	int Bu,Bd,Bl,Br;
    	Border(B,&Bu,&Bd,&Bl,&Br);

		double AX = (Al+Ar)/2.0;
		double AY = (Au+Ad)/2.0;

		double BX = (Bl+Br)/2.0;
		double BY = (Bu+Bd)/2.0;
		
		double k = (BY-AY)/(BX-AX);
		double b = (AY)-k*AX;
		vector<double> res;
		res.push_back(k);
		res.push_back(b);
		
		return res;
    }
};

int main(){
	return 0;
}