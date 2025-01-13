#include<iostream>
using namespace std;
void change(int* n){
    *n=20;
    
}
int main(){
    int a=10;
    change(&a);
    cout<<a;
}