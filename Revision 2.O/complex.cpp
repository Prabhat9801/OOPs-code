#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    complex(){}
    complex(int a,int b){
        real=a;
        img=b;
    }
    void display(){
        cout<<real<<" + "<<"i"<<img<<endl;
    }
    complex operator +(complex &c){
        complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
};
int main(){
    complex c1(4,5);
    complex c2(6,7);
    complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
    }
