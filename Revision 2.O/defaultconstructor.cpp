#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    int id;
    public:
    string name;
    string branch;
    student(){
        name="Prabhat";
        id=1;
        roll=44;
        branch="AI";
       cout<<id<<" "<<name<<" "<<roll<<" "<<branch<<endl;
    }
   
};
int main(){
    student s1;
    
    return 0;

}