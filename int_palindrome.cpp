#include<iostream>
using namespace std;

int main(){
    int num,reversed,org;
    reversed =0;
    
    cout << "Enter the num: ";
    cin >> num;
    org = num;
    while(num!=0){
        int digit = num%10;
        reversed = reversed*10 +digit;
        num = num/10;

    }
    if(org==reversed){
        cout<< "Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}