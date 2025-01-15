#include<iostream>
using namespace std;
class Bank{
  private:
  string name;
  int account_number;
  int balance;
  public:
  Bank(string a,int b,int c){
     name=a;
     account_number=b;
     balance=c;
     cout<<name<<" "<<account_number<<" "<<balance<<endl;
  }
  void update_balance(int amount){
    if(amount>0){
        balance+=amount;
        cout<<balance<<endl;
    }
    else {
        cout<<"Invallid amount"<<endl;
    }
  }
};
int main(){
    Bank A1("Rohit",123,1000);
    A1.update_balance(1000);

    return 0;
}