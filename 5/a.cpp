#include<iostream>
using namespace std;


// Create a class Person which includes: character array name of size 64, age in numeric, character array address of size 64, and 
// total salary in real numbers (divide salary in different components, if required). 
// Make an array of objects of class Person of size 10.
// (a) Write inline function that obtains the youngest and eldest age of a person from a class Person using arrays.
class Person{
    char name[64],address[64];
    int age;
    double salary;
    
public:
    void input(){
        cout<<"Enter name, address, age and salary: ";
        cin>> name>> address>> age>>salary;

    }
    friend inline void findAge(Person p[]){
        int young = p[0].age,old=p[0].age;
        for(int i=0;i<10;i++){
            if (p[i].age>old){
                old=p[i].age;
            }
            if (p[i].age<young){
                young=p[i].age;
            }
        
        }
        cout << "Youngest Age = " << young << endl;
        cout << "Eldest Age = " << old << endl;
    }
};
int main(){
    Person p[10];
    cout << "Enter Name Age Address for 10 persons:\n";

    for (int i = 0; i < 10; i++){
        p[i].input();

    }
       

    findAge(p);

    return 0;
}