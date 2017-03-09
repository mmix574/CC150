#include <iostream>
using namespace std;


class AddSubstitution {
public:
    int calc(int a, int b, int type) {
        // type:0 除法
        // type:1 乘法
        // type:-1 减法

            switch(type){
                case 0:
                    int positive_flag; 
                    positive_flag = 1;
                    if(a<0){
                        positive_flag = ~positive_flag+1;
                        a=~a+1;
                    }
                    if(b<0){
                        positive_flag = ~positive_flag+1;
                        b=~b+1;                 
                    }
                    int count;
                    count=0;
                    while(a>=b){
                        count++;
                        a-=b;
                    }
                    if(positive_flag>0){
                        return count;
                    }else{
                        return ~count+1;
                    }
                case 1:
                    if(b>a){
                        return calc(b,a,type);
                    }else{
                        if(a==0||b==0){
                            return 0;
                        }else{
                            int negative_flag = b<0?1:0;
                            if(negative_flag){
                                b=calc(0,b,-1);
                            }
                            if(b==1){
                                return negative_flag?~a+1:a;
                            }
                            else{
                                if(b%2){
                                    return calc(a<<1,b>>1,1)+a;
                                }else{
                                    return calc(a<<1,b>>1,1);
                                }
                            }
                            return negative_flag?calc(0,a,-1):a;
                        }
                    }
                case -1:
                    return a+~b+1;
            }
            return 0;
    }
};

int main(){
    AddSubstitution a;
    cout<<a.calc(7133,7371,1)<<endl;
    return 0;
}

