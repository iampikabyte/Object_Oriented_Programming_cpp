#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int empID;
    int salary;
    float performance;
    Employee(){

    }
    Employee(string n, int id, int s, float p){
        name = n;
        empID = id;
        salary=s;
        performance = p;
    }
};

void display(Employee e){
    cout<<"Name: "<<e.name<<endl;
    cout<<"EmployeeID: "<<e.empID<<endl;
    cout<<"Salary: "<<e.salary<<endl;
    cout<<"Employee Performance: "<<e.performance<<endl;
    cout<<endl;
}
int main(){

    Employee e1("Rakibul Hasan", 674, 45000, 8.5);

    display(e1);

    Employee e2 = e1; // Deep Copy
    /* Know the difference between Deep copy and Shallow copy */

    e2.name = "Abdur Rahman";

    display(e2);

    Employee e3(e1); // Copy Constructor - Deep Copy
    display(e3); 



    return 0;
}