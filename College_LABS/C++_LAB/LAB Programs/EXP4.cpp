/*
    Given that an EMPLOYEE class contains following members: data members:
    Employee number, Employee name, Basic, DA, IT, Net Salary and print data
    members.
*/

#include<iostream>
using namespace std;
class employee{
    int emp_number;
    char emp_name[20];
    float emp_basic, emp_da, emp_it, emp_net_salary;
    public:
    void get_emp_details();
    float find_net_salary(float basic, float da, float it);
    void show_emp_details();
};
void employee::get_emp_details(){
    cout<<"\nEnter employee number: ";
    cin>>emp_number;
    cout<<"\nEnter employee name: ";
    cin>>emp_name;
    cout<<"\nEnter employee basic: ";
    cin>>emp_basic;
    cout<<"\nEnter employee DA: ";
    cin>>emp_da;
    cout<<"\nEnter employee IT: ";
    cin>>emp_it;
}
float employee::find_net_salary(float basic, float da, float it){
    return (basic + da) - it;
}
void employee::show_emp_details(){
    cout<<"\n*** Details of employee ***";
    cout<<"\nEmployee Name   : "<<emp_name;
    cout<<"\nEmployee Number : "<<emp_number;
    cout<<"\nEmployee Salary : "<<emp_basic;
    cout<<"\nEmployee DA     : "<<emp_da;
    cout<<"\nIncome Tax      : "<<emp_it;
    cout<<"\nNet Salary      : "<<find_net_salary(emp_basic, emp_da, emp_it);
    cout<<"\n-------------------------------\n";
}
int main(){
    employee emp;
    emp.get_emp_details();
    emp.show_emp_details();
    return 0;
}