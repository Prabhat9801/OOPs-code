#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add("Singh", "Prabhat") << endl;
    cout << "Sum of doubles: " << add(3.5, 4.5) << endl;
    return 0;
}
