#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(){

    }
    Complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<"The Additiion of the Complex Number is : "<<real<<" + "<<"i"<<img<<endl;
    }
    Complex operator + (Complex &C){
        Complex ans;
        ans.real=real+C.real;
        ans.img=img+C.img;
        return ans;
    }
};
int main(){
    int a;
    cout<<"Enter the 1st value of the real part : ";
    cin>>a;
    cout<<endl;
    int b;
    cout<<"Enter the 2nd value of the real part : ";
    cin>>b;
    cout<<endl;
    int c;
    cout<<"Enter the 1st value of the real part : ";
    cin>>c;
    cout<<endl;
    int d;
    cout<<"Enter the 2nd value of the real part : ";
    cin>>d;
    cout<<endl;

    Complex C1(a,c);
    Complex C2(b,d);
    Complex C3 = C1+C2;
    C3.display();
    return 0;
}