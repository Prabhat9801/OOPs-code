#include<iostream>
using namespace std;
class increment{
    public:
    int x;
    increment(int value){
        x=value;
    }
    increment operator - (){
        return increment(-x);
    }
    void display(){
        cout<<x;
    }
};
int main(){
    increment a1(5);
    a1.display();
    increment a2=-a1;
    a2.display();

}