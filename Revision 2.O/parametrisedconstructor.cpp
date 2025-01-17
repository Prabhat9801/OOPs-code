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
   
};
int main(){
    
   student s1(44,1,"Prabhat","AI");
   student s2(33,2,"karan","ds");
   student s3(55,3,"kishlay","AI");
   student s4(22,4,"sanjay","ds");
    
    return 0;

}