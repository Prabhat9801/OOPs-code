#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age,roll;
    string grade;
    public:
    void student(string Name,int Age,int Roll,string Grade){
     name=Name;
     age=Age;
     roll=Roll;
     grade=Grade;
   

    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll<<" "<<grade;
    }
};
int main(){
    Student s1;
    s1.student("Karan",18,30,"A+");
    s1.display();
    
    return 0;
}