#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    int account;
    bank(){
        cout<<"Automatically called conctructor";
    }
};
int main(){
    bank b1;
    return 0;
}
