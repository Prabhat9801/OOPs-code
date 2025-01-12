#include<iostream>
#include<string.h>
using namespace std;
class A{
    public:
    int x,y;
    A(){
        cout<<"Hello"<<endl;
    }
    A(int a,int b){
       x=a;
      y=b;
        cout<<x+y<<endl;
    }

};
int main(){
    A p;
    A r(1,2);
    return 0;
}