#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    int balance;
    bank(){
        name="Rohit";
        balance=123;

    }
    void display(){
        cout<<name<<" "<<balance;
    }
};
int main(){
    bank b1;
    b1.display();
    return 0;
}