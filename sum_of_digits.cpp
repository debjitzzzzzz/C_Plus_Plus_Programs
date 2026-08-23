#include <iostream>
using namespace std;
int main(){
    int num,d_sum;
    d_sum =0;
    cout << "Enter the Num: ";
    cin >> num;
    while (num!=0){
        int digit = num%10;
        d_sum +=digit;
        num = num/10;

    }
    cout << "Sum: "<<d_sum;
    
    return 0;
}