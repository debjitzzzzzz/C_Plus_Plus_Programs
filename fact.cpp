#include<iostream>
using namespace std;
int main(){
    int num,fact ;
    fact =1;
    cout << "Enter the num: ";
    cin >> num;
    for (int i= 1; i<=num;i++){
        fact *=i;
    }
    cout << "The factorial: "<< fact;
    return 0;
}