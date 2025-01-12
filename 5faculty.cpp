#include<iostream>
#include<string.h>
using namespace std;
class faculty{
    public:
    double id;
    string name;
    double salary;
    string post;
    void input(){
        cout<<"Enter Id, name, salary, post:"<<endl;
        cin>>id>> name>> salary >>post;
     
    }
    void display(){
        cout<<"Id :"<<id<< "Name :"<<name<< "Salary :"<<salary<< "Post :"<<post<<endl;
    }
};
int main(){
    faculty F[5];
 for(int i=0;i<5;i++){
    F[i].input();
  
 }
 for(int i=0;i<5;i++){
    F[i].display();
  
 }
 return 0;
}