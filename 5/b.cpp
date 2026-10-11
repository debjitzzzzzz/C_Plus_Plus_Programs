#include <iostream>
#include <iomanip> // 1. Added for std::fixed and std::setprecision
using namespace std;

class Person {
    char name[64];
    int age;
    double basic, hra, da, ta, gross; // 2. Using double for better precision

public:
    Person() {
        cout << "Enter Name, Age and Basic Salary: ";
        cin >> name >> age >> basic;

        hra = 0.20 * basic;
        da = 0.10 * basic;
        ta = 0.05 * basic;
        gross = basic + hra + da + ta;
    }

    void display() {
        // 3. Format floats to normal decimal format with 2 decimal places
        cout << fixed << setprecision(2);

        cout << "\n-----------------------------\n";
        cout << "Name          : " << name << endl;
        cout << "Age           : " << age << endl;
        cout << "Basic Salary  : " << basic << endl;
        cout << "HRA           : " << hra << endl;
        cout << "DA            : " << da << endl;
        cout << "TA            : " << ta << endl;
        cout << "Gross Salary  : " << gross << endl;
    }
};

int main() {
    Person p;
    p.display();

    return 0;
}