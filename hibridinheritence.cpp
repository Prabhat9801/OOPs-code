#include <iostream>
using namespace std;
class Vehicle
{
public:
    void display()
    {
        cout << "Vehicle has four wheel" << endl;
    }
};
class Car 
{
public:
    void display()
    {

        cout << "Car has the four wheel" << endl;
    }
};
class Bus : public Vehicle
{
public:
    void display()
    {
        Vehicle::display();
       

        cout << "Bus has the four wheel" << endl;
    }
};
class Van : public Car, public Vehicle
{
public:
    void display()
    {
        Vehicle::display();
        Car::display();

        cout << "Bus has the four wheel" << endl;
    }
};
int main()
{
    Car c1;
    Bus b1;
    Van v1;

    
    c1.display();
    b1.display();
    v1.display();
    return 0;
}