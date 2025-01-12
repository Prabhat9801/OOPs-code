#include<iostream>
#include<string.h>
using namespace std;
class A{
    public:
    void display(){
        cout<<"This is the Parent Class"<<endl;

    }
};
class B:public A {
    public:
    void display(){
        cout<<"This the child class"<<endl;
    }
};
int main(){
    A* c1;
    B b;
    c1=&b;
    c1->display();
    return 0;
}