#include<iostream>
#include<string.h>
using namespace std;
class Teacher{

    
    public:
    Teacher(){
      cout<<"I m the Constructor."<<endl;
    }
     string name;
    string subject;
    string dept;
    double salary;
  Teacher(string n,string s , string d,double sal){
    name=n;
    subject=s;
    dept=d;
    salary=sal;
  }
  
  void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Subject: "<<subject<<endl;
   
    cout<<"Department: "<<dept<<endl;
    cout<<"Salary: "<<salary<<endl;
  
  }
 
};
int main(){
    Teacher a;
    Teacher a1("Prabhat","CSE","Computer",25000);
    a1.display();

 
    
    return 0;
}