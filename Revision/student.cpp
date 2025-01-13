#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  int age,roll_number;
  string grade;
};
int main(){
    int n;
    cout<<"Enter the number of students = ";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
    
    cin>>s[i].name>>s[i].age>>s[i].roll_number>>s[i].grade;
    
    }
    
    for(int i=0;i<n;i++){
        cout<<"Student "<<i<<endl<<endl;
        cout<<"Name : "<<s[i].name<<endl<<"Age : "<<s[i].age<<endl<<"Roll Number : "<<s[i].roll_number<<endl<<"Grade : "<<s[i].grade<<endl<<endl;
    }
    return 0;
}