#include<iostream>
using namespace std;
class vehicle{
    public:
    void wheel(){
        cout<<"Vehicle has the four wheel"<<endl;
    }
};
class car:public vehicle{
    public:
    void Horn(){
        cout<<"Start the horn"<<endl;
    }
};
int main(){
    car c1;
    c1.wheel();
    c1.Horn();

}