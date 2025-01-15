#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    int balance;
    bank(){
        name="Rohit";
        balance=123;
        cout<<name<<" "<<balance<<endl;

    }
    bank(){
        name="Mohit";
        balance=123;
        cout<<name<<" "<<balance<<endl;

    }
    bank(){
        name="Sohit";
        balance=123;
        cout<<name<<" "<<balance<<endl;

    }
    // void display(){
    //     cout<<name<<" "<<balance;
    // }
};
int main(){
    bank b1,b2,b3;
   
    return 0;
}