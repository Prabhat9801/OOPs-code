#include<iostream>
using namespace std;
template <typename T>
T integer(T a,T b){
    return a*b;
}
template <typename T>
T floating(T a,T b){
    return a*b;
}
 int main(){
   cout<<integer(3,4)<<endl;
   cout<<floating(2.5,1.6)<<endl;
   
    
    
}