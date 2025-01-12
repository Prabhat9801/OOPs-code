#include<iostream>
#include<string.h>
using namespace std;
class Teacher{
    private:
    double salary;
    
    public:
    string name;
    string department;
    string subject;
    void setsalary(double x){
        salary = x;
    }
    double getsalary(){
        return salary;
    }

    void changedept(string newdept){
        department = newdept;
    }
};
int main(){
    Teacher a1;
    a1.name="Prabhat";
    a1.department="IT";
    a1.subject="Computer";
a1.setsalary(25000);

    a1.changedept("CSE");
    cout<<a1.getsalary()<<endl;
    cout<<a1.department<<endl; 
    
    return 0;
}