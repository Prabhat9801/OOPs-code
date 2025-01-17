#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c;
    try{
        if(b!=0){
            c=a/b;
        }
    
       else{
        throw"b is equalt to Zero.";
       }
        
    
}
catch(const char *e){
    cout<<"Exception error: "<<e;
}
}