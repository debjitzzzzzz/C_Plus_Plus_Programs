#include<iostream>
using namespace std;
int main(){
    string str,rev;
    rev ="";
    cout << "Enter the character: ";
    cin >> str;
    
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    if (str == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}