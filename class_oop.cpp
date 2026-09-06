#include<iostream>
#include<string>
using namespace std;

class Student{
public:
	string name;
	int rollNum;
	float cgpa;
};
void display(Student s){
	cout<<"Name: "<<s.name<<endl;
	cout<<"Roll Number: "<<s.rollNum<<endl;
	cout<<"CGPA: "<<s.cgpa<<endl;
}
void display2(Student &s){ // pass by reference
	cout<<"Name: "<<s.name<<endl;
	cout<<"Roll Number: "<<s.rollNum<<endl;
	cout<<"CGPA: "<<s.cgpa<<endl;
}

int main(){
	Student s1;
	s1.cgpa = 3.20;
	s1.name="Rakib";
	s1.rollNum=674;
	display(s1); // Pass by Value
	display2(s1); // Pass by Reference
	return 0;
}