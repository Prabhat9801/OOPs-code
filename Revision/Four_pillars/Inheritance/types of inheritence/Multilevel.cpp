#include<iostream>
using namespace std;
class animal{
    public:
    void Animal(){
      cout<<"This is the animal"<<endl;
    }
};
class dog:public animal{
    public:
    void Dog(){
      cout<<"This is the Dog"<<endl;
    }
};
class cat:public dog{
    public:
    void Cat(){
      cout<<"This is the Cat"<<endl;
    }
};
int main(){
    cat c1;
    c1.Animal();
    c1.Dog();
    c1.Cat();
    return 0;
}