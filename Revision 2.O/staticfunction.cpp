#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    int id;
    static int totalstudent;
    public:
    string name;
    string branch;
    void fun(int roll,int id,string name,string branch){
        this->roll=roll;
        this->id=id;
        this->name=name;
        this->branch=branch;
        totalstudent++;
        
    }
    static int fun(){
    return totalstudent;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<roll<<" "<<branch<<" "<<totalstudent<<endl;
    }
};
int student::totalstudent=0;
int main(){
    student s1,s2,s3,s4;
    s1.fun(44,1,"Prabhat","AI");
    s2.fun(33,2,"karan","ds");
    s3.fun(55,3,"kishlay","AI");
    s4.fun(22,4,"sanjay","ds");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    cout<<"Total student: "<<student::fun();
    return 0;

}