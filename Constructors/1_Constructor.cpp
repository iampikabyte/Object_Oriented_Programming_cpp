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
    Student(){
        // Default Constructor
    }
    Student(string s, int r){ //Parameterized Constructor
        name = s;
        rollNum = r;
        //cgpa = g;
    }
    Student(string s, int r, float g){ //Parameterized Constructor
        name = s;
        rollNum = r;
        cgpa = g;
    }
};
void display(Student s){ // display details 
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll:  "<<s.rollNum<<endl;
    cout<<"Cgpa: "<<s.cgpa<<endl;
    cout<<endl;
}
int main(){

    Student s1("Rakibul Hasan", 674);
    s1.cgpa = 3.20;
    display(s1);

    Student s2;
    s2.name = "Abdur Rahman";
    s2.rollNum=01;
    s2.cgpa=4.0;
    display(s2);

    return 0;
}