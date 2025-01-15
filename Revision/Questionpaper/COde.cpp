#include<iostream>
using namespace std;

class personal {
public:
    int p();  // Member function declaration
    int (personal::*x)();  // Member function pointer to a member function of personal class
};

int personal::p() {
    return 1;  // Member function definition
}

int main() {
    personal a;
    a.x = &personal::p;  // Assign the address of the member function p to member function pointer x
    
    // Call the function through the member function pointer
    cout << (a.*(a.x))() << endl;  // Using .* operator to call member function
    
    return 0;  // Correct return type for main
}
