#include<iostream>
using namespace std;
class bank{
    public:

    string name;
    int bal;
    bank(){
        name="Rohit";
        bal=123;
    }
    bank(string a,int b){
        name=a;
        bal=b;
        
    }
    void display(){
        cout<<name<<" "<<bal<<endl;
    }
    bank(bank &c){
        name=c.name;
        bal=c.bal;
    }
};
int main(){
    bank b1("Rohit",123);
    b1.display();
    bank b2(b1);
    b2.display();
    bank b3;
    b3=b1;
    b3.display();
    return 0;

}