/* 
    Write a C++ to illustrate the concepts of console I/O operations. 
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char ch;
    int x=10;
    cout<<"example on formatted console i/o using get() and put()\n";
    cout<<"press any key: ";
    ch = cin.get();
    cout<<"\nYou have pressed: ";
    cout.put(ch);
    cout<<endl;
    cout<<"example on formatted console i/o using setw() and setfill()\n";
    cout<<setw(10)<<x<<endl;
    cout<<setw(10)<<setfill('*')<<x<<endl;
    return 0;
}