#include<iostream>
using namespace std;
class student{
    private:
    int total;
    public:
    friend class totalstudent;
};

class totalstudent{
    public:
void display(student &s,int a){
s.total=a;
cout<<"Total = "<<s.total;
}
};
int main(){
    student s;
    totalstudent t;
    t.display(s,500);
}