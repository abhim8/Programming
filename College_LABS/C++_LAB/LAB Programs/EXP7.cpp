/*
    Write a C++ program to use scope resolution operator. Display the various values of
    the same variables declared at different scope levels.
*/

#include<iostream>
using namespace std;
int my_var=10;
int main(){

    int my_var=100;
    cout<<"value of global my_var is "<<::my_var<<endl;
    cout<<"value of local my_var is "<<my_var<<endl;
    return 0;
}