#include<iostream>
using namespace std;

// Student ,Exam,Result
class Student{
protected:
    string name;
    int roll;
public:
    void getStudent(){
        cout<<"Enter your name and roll num: ";
        cin>> name>>roll;
    }
    

};
class Exam: public Student{
protected:
    int marks[6];
public:
    void getMarks(){
        cout<<"Enter Marks of six subject: \n";
        for (int i=0;i<6;i++){
            cin>>marks[i];
    }
    }
    
};

class Result : public Exam{
    int totalMarks=0;
public:
    void calc(){
        for(int i=0;i<6;i++){
            totalMarks+= marks[i];
        }
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Total Marks: "<<totalMarks<<endl;
        cout<<"Percentage: "<<totalMarks*0.166<<endl;
    }
};

int main(){
    Result r;
    r.getStudent();
    r.getMarks();
    r.calc();
    r.display();
    return 0;
}