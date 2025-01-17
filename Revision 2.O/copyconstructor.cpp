#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    int id;
    public:
    string name;
    string branch;
    student(int roll,int id,string name,string branch){
        this->roll=roll;
        this->id=id;
        this->name=name;
        this->branch=branch;
        cout<<id<<" "<<name<<" "<<roll<<" "<<branch<<endl;
    }
    student(student &s){
        this->roll=s.roll;
        this->id=s.id;
        this->name=s.name;
        this->branch=s.branch;
        cout<<id<<" "<<name<<" "<<roll<<" "<<branch<<endl;
    }
   
};
int main(){
    
   student s1(44,1,"Prabhat","AI");
   student s2(s1);
   student s3(55,3,"kishlay","AI");
   student s4(s3);
    
    return 0;

}