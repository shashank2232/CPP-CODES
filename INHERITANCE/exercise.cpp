// write a class for Employee with derived classes
// 1. full time employee with salaries
// 2. part time employees with daily wages
#include<iostream>
using namespace std;

class Employee{
    private:
    int eid;
    string name;

    public:
    // parameterized constructors
    Employee(int e,string n){
        eid = e;
        name = n;
    }
    // GETTERS
    int getEmployeeID(){
        return eid;
    }
    string getName(){
        return name;
    }
};
class FulltimeEmployee:public Employee{
    private:
    int salary;

    public:
    // constructor calling parameterized constructor of Employee class
    FulltimeEmployee(int e,string n,int sal):Employee(e,n){
        salary = sal;
    }
    // getter
    int getSalary(){
        return salary;
    }
};
class ParttimeEmployee:public Employee{
    private:
    int wage;

    public:
    // constructor calling parameterized constructor of Employee class
    ParttimeEmployee(int e,string n,int w):Employee(e,n){
        wage = w;
    }
    // getter
    int getWage(){
        return wage;
    }
};
int main(){
    ParttimeEmployee p1(1,"John",700);
    FulltimeEmployee p2(2,"Raj",50000);

    cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Wage of "<<p1.getName()<<" is "<<p1.getWage()<<endl;
}