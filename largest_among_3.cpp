#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<< "Enter 3 numbers: "<<endl;
    cin >> a >>b>>c;
    if (a>b && a>c){
        cout << a<<" is the highest";
    }
    else if (b>a && b>c){
        cout <<b<< " is the highest";
    }
    else if (c>b && c>a){
        cout << c <<" is the highest";
    }
    return 0;
}