#include<iostream>
using namespace std;
class demo{
    public:
    int public_var;
    private:
    int private_var;
    protected:
    int protected_var;
    public:
    demo(){
        public_var=10;
        private_var=20;
        protected_var=30;
    }
    void displayprivate(){
        cout<<"Private variable: "<<private_var<<endl;
    }
};
        
        class Derived:public demo{
            public:
            void accessprotected(){
                cout<<"Protected  variable: "<<protected_var<<endl;
            }
        
    
};
int main(){
    demo obj;
    cout<<"Public variable: "<<obj.public_var<<endl;
    obj.displayprivate();
    Derived derivedobj;
    derivedobj.accessprotected();
    
}