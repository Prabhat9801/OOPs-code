#include<iostream>
using namespace std;
class Teacher{
    private:
    int Private;
    protected:
    int Protected;
    public:
    
    Teacher(){
        Private=10;
        Protected=20;
    }
 
    friend class student;

};
class student{
    public:
    void display(Teacher &t){
    
    cout<<t.Private<<endl<<t.Protected<<endl;
   }
    
};
int main(){
    Teacher t;
    student s1;
    s1.display(t);
}