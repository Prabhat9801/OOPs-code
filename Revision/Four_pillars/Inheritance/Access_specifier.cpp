#include<iostream>
using namespace std;
class Human{
    protected:
    string name;
    int age;
};
class student:private Human{
    protected:
    void fun(string a,int b){
        name=a;
        age=b;
    }
    public:
    void dun(string c,int d){
        fun(c,d);
        cout<<name<<" "<<age<<endl;
        
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
   
 

};
int main(){
    student s1;
    s1.dun("Rohit",15);
    s1.display();
    return 0;
    
}