#include<iostream>
using namespace std;
class A{
   int x;
    public:
  
   
    friend class B;
   
  
    
};
class B{
    public:
    void display(A a){
       a.x=10;
        cout<<a.x<<endl;
    }
};


   
int main(){
    A a1;
    B a2;
    
    a2.display(a1);
    
   
    
    
}