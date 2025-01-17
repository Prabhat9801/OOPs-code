#include<iostream>
using namespace std;
class animal{
    public:
    virtual void sound(){
        cout<<"Every animal's sound is different."<<endl;  
        }
};
class dog:public animal{
    public:
    void sound(){
        cout<<"Dog barks."<<endl;
    }
};
int main(){
    animal *a1;
    dog d1;
    a1=&d1;
    a1->sound();

}