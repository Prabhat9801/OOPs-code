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
int main(){
    Rohit r1;
    r1.male();
    
    r1.rohit();
    student s1;
    s1.male();
    
    s1.Student();

}