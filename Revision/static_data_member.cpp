#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_number,balance;
    static int total_customer;
    public:
    Customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;

    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
        cout<<total_customer<<endl;
    }
    
};
int Customer:: total_customer=0;
int main(){
    Customer A1("Rohit",12,1000);
    Customer A2("Mohit",13,2000);
    A1.display();
    A2.display();
    return 0;
    
}