#include<iostream>
#include<string.h>
using namespace std;
class A{
    public:
    int x;
    int y=-x;
    void display(){
    cout<<y<<endl;
    }
};
int main(){
    A a;
    a.x=5;
    a.display();
    return 0;
}