#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int roll;
    string grade;

};
int main(){
    Student s1;
    s1.name="Karan";
    s1.age=18;
    s1.roll=30;
    s1.grade="A+";
    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll<<" "<<s1.grade<<endl;
    return 0;
}