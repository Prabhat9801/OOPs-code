#include<iostream>
using namespace std;
class access{
    private:
    int PrivateVAr=10;
    protected:
    int ProtectedVar=20;
    public:
    int PublicVar=30;
    
};
class Derived1:public access{
    // int PrivateVAr=10; is not accessible.
    // int ProtectedVar=20; is protected is here
    // int PublicVar=30; is public here
    public:
    
    void display(){
        cout<<ProtectedVar<<endl<<PublicVar<<endl;
    }
};
class Derived2:protected access{
    // int PrivateVAr=10; is not accessible.
    // int ProtectedVar=20; is protected is here
    // int PublicVar=30; is protected here
    public:
    void display(){
        cout<<ProtectedVar<<endl<<PublicVar<<endl;
    }
};
class Derived3:private access{
    // int PrivateVAr=10; is not accessible.
    // int ProtectedVar=20; is private is here
    // int PublicVar=30; is private here
    public:
    void display(){
        cout<<ProtectedVar<<endl<<PublicVar<<endl;
    }
};
int main(){
    Derived1 d1;
    d1.display();
    Derived2 d2;
    d2.display();
    Derived3 d3;
    d3.display();
    return 0;
}