#include <iostream>
using namespace std;

// Call by Value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    cout << "Inside Call by Value: x = " << x
         << ", y = " << y << endl;
}

// Call by Reference
void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    cout << "Inside Call by Reference: x = " << *x
         << ", y = " << *y << endl;
}

int main() {
    int a = 40;
    int b = 50;

    // Call by Value
    cout << "Before Call by Value: a = " << a
         << ", b = " << b << endl;

    swapByValue(a, b);

    cout << "After Call by Value: a = " << a
         << ", b = " << b << endl;

    cout << endl;

    // Call by Reference
    cout << "Before Call by Reference: a = " << a
         << ", b = " << b << endl;

    swapByReference(&a, &b);

    cout << "After Call by Reference: a = " << a
         << ", b = " << b << endl;

    return 0;
}