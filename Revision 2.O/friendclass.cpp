#include<iostream>
using namespace std;
class Teacher{
    private:
    int salary;
    public:
   
    friend class hack;

};
class hack{
    public:
    
    void display(Teacher &t,int a){
    t.salary=a;
    cout<<"Salary : "<<t.salary<<endl;
    }
 
};
int main(){
    Teacher t;
    hack h1;
    h1.display(t,500);
}