#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    int id;
    public:
    string name;
    string branch;
    void fun(int roll,int id,string name,string branch){
        this->roll=roll;
        this->id=id;
        this->name=name;
        this->branch=branch;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<roll<<" "<<branch<<endl;
    }
};
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
    return 0;

}