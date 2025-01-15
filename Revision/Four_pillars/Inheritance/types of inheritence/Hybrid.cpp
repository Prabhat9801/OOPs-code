#include<iostream>
using namespace std;
class Male{
    public:
    void male(){
        cout<<"Rohit the the Male"<<endl;
    }
};
class student:public Male{
    public:
    void Student(){
        cout<<"Rohit the the Student"<<endl;
    }
};
class Rohit:public Male{
    public:
    void rohit(){
        cout<<"I m the Rohit"<<endl;
    }
};
class Teacher{
    public:
    void teacher(){
        cout<<"Mohit is the teacher"<<endl;
    }
};
class Man{
    public:
    void man(){
        cout<<"Mohit is the man"<<endl;
    }
};
class Mohit:public Teacher,public Man{
    public:
    void mohit(){
        cout<<"I m the Mohit"<<endl;
    }
};
int main(){
    Rohit r1;
    r1.male();
    r1.rohit();
    student s1;
    s1.male();
    s1.Student();
    Mohit m1;
    m1.teacher();
    m1.man();
    m1.mohit();

}