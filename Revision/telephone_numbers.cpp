#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Contact {
public:
    string name;
    string phoneNumber;

    Contact(string n, string p) : name(n), phoneNumber(p) {}

    void saveToFile(ofstream &outFile) {
        outFile << name << "," << phoneNumber << endl;
    }
};

int main() {
    ofstream outFile("contacts.txt");

    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Contact contact1("John Doe", "123-456-7890");
    Contact contact2("Jane Smith", "987-654-3210");
    Contact contact3("Alice Johnson", "555-123-4567");

    contact1.saveToFile(outFile);
    contact2.saveToFile(outFile);
    contact3.saveToFile(outFile);

    outFile.close();
    cout << "Contacts saved to file successfully!" << endl;

    return 0;
}
