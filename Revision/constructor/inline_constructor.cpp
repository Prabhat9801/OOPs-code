#include<iostream>
using namespace std;
class bank{
    public:

    string name;
    int bal;
   inline bank(string a,int b): name(a),bal(b){
       
        cout<<name<<" "<<bal;
    }
};
int main(){
    bank b1("Rohit",123);
    return 0;

}