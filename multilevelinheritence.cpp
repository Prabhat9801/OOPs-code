#include<iostream>
using namespace std;
class Vehicle{
    public:
     void display(){
    cout<<"Vehicle has four wheel"<<endl;
     }
};
class Car:public Vehicle{
    public:
    
    void display(){
        Vehicle::display();
    cout<<"Car has the four wheel"<<endl;
    }
};
class Bus:public Car{
    public:
     void display(){
        Car::display();
    cout<<"Bus has the four wheel"<<endl;
    }
};
int main(){
    Bus c1;
    c1.display();
    return 0;
}