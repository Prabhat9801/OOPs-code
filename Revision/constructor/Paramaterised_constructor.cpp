#include<iostream>
using namespace std;
class bank{
    public:

    string name;
    int bal;
    bank(string a,int b){
        name=a;
        bal=b;
        cout<<name<<" "<<bal<<endl;
    }
};
int main(){
    bank b1("Rohit",123);
    bank b2("Mohit",345);
    return 0;

}