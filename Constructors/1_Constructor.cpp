/*
Constructors are special member functions of a class that are executed whenever we create new objects of that class. A constructor has the same name as the class and does not have any return type. It is used to initialize the objects of its class.
*/

#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollNum;
    float cgpa;
    Student(string s, int r, float g){ //Parameterized Constructor
        name = s;
        rollNum = r;
        cgpa = g;
    }
};
void display(Student s){
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll:  "<<s.rollNum<<endl;
    cout<<"Cgpa: "<<s.cgpa<<endl;
}
int main(){

    Student s1("Rakibul Hasan", 674, 3.20);
    display(s1);

    return 0;
}