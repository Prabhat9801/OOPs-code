#include<iostream>
using namespace std;
class Male{
    public:
    void male(){
        cout<<"Rohit the the Male"<<endl;
    }
};
class student{
    public:
    void Student(){
        cout<<"Rohit the the Student"<<endl;
    }
};
class Rohit:public Male,public student{
    public:
    void rohit(){
        cout<<"I m the Rohit"<<endl;
    }
};
int main(){
    Rohit r1;
    r1.male();
    r1.Student();
    r1.rohit();
}