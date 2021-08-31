/*
    Write a C++ program to declare Struct. Initialize and display contents of member
    variables.
*/

#include<iostream>
using namespace std;

struct college{
    char college_name[15];
    char college_code[2];
    char dept[30];
    int intake;
};

int main(){
    struct college clg;
    cout<<"\n.... Enter the College Information......\n";
    cout<<"\nName of the college: ";
    cin>>clg.college_name;
    cout<<"\nCollege Code: ";
    cin>>clg.college_code;
    cout<<"\nDepartment name: ";
    cin>>clg.dept;
    cout<<"\nDepartment In-take: ";
    cin>>clg.intake;

    cout<<"\n\n.... The entered College Information is ......\n\n";
    cout<<"Name of the college : " <<clg.college_name; 
    cout<<"\nCollege Code : " <<clg.college_code; 
    cout<<"\nName of the Department : " <<clg.dept; 
    cout<<"\nThe Department of : " <<clg.dept<<" has in-take : "<<clg.intake; 
    cout<<"\n\n-----------------------------------------------\n\n";

    return 0;
}