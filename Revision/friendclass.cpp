#include<iostream>
using namespace std;
class Teacher{
    private:
    int Private;
    protected:
    int Protected;
    public:
 
    friend class student;

};
class student{
    public:
    void display(Teacher &t, int a,int b){
    t.Private=a;
    t.Protected=b;
    cout<<t.Private<<endl<<t.Protected<<endl;
   }
    
};
int main(){
    Teacher t;
    student s1;
    s1.display(t,10,20);
}