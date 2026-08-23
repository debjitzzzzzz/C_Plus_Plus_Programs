#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int num, digits,org,sum;
    digits =0;
    sum=0;
    cout << "Enter the num: ";
    cin>> num;
    org = num;
    while (num!=0){
        num =num/10;
        digits +=1;
    }
    num =org;
    while(num!=0){
        int digit = num%10;
        sum += pow(digit,digits);
        num=num/10;
    }
    if (sum ==org){
        cout<<"Armstrong Number";
    }
    else{
        cout << "Not Armstrong Number";
    }
    

    return 0;
}