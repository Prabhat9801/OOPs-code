#include<iostream>
using namespace std;
class square{
    private:
    int a;
    int b;
    public:
    int area;
    void calculation(int a,int b){
        this->a=a;
        this->b=b;
        try{
            if(a==b){
                area=a*b;
                cout<<"The area is : "<<area<<endl;
            }
            else {
                throw("a is not equal to b");
            }
        }
        catch(const char *e){
            cout<<"Exception error : "<<e<<endl;
        }
    }
   
};
int main(){
   square s1;
   s1.calculation(4,4);
   square s2;
   s2.calculation(5,6);
}