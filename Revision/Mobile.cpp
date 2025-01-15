#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Mobile {
    long long int Mobile_number;
    string Name;

public:
    Mobile() {}
    Mobile(long long int a, string b) {
        Mobile_number = a;
        Name = b;
    }

    void save(ofstream &x) const {
        x << Name << "," << Mobile_number << endl;
    }
};

long long int generateRandomMobileNumber() {
    long long int prefix = 9800000000LL;  // Example prefix for mobile numbers
    long long int suffix = rand() % 1000000000;  // Random 9-digit suffix
    return prefix + suffix;
}

string generateRandomName() {
    vector<string> names = {"Prabhat", "Aarav", "Ishita", "Nikhil", "Sanya", "Rohan", "Tanya", "Aditya", "Meera", "Karan"};
    int randomIndex = rand() % names.size();
    return names[randomIndex];
}

int main() {
    srand(time(0));  // Seed the random number generator

    ofstream x("Mobile.txt");
    if (!x) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    const long long totalContacts = 1000000000;

    for (long long i = 0; i < totalContacts; i++) {
        string name = generateRandomName();
        long long int number = generateRandomMobileNumber();
        Mobile contact(number, name);
        contact.save(x);

        if (i % 100000 == 0) {
            cout << "Generated " << i << " contacts..." << endl;  // Progress output
        }
    }

    x.close();
    cout << "Successfully generated 1 billion contacts." << endl;

    return 0;
}
