/*
    Write a C++ program to create multilevel inheritance. (Hint: Classes A1, A2, A3)
*/

#include<iostream>
using namespace std;

class A1{
    int a;
    public:
    A1(){ a = 10; }
    void show_a(){
        cout<<endl<<"Inside the A1 show_a method!"<<endl;
        cout<<"Value of a is "<<a<<endl;
    }
};

class A2: public A1{
    int b;
    public:
    A2(){ b = 100; }
    void show_b(){
        cout<<endl<<"Inside the A2 show_b method!"<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

class A3: public A2{
    int c;
    public:
    A3(){ c = 1000; }
    void show_c(){
        cout<<endl<<"Inside the A3 show_c method!"<<endl;
        cout<<"Value of c is "<<c<<endl;
    }
};

int main(){
    A3 obj;
    obj.show_a();
    obj.show_b();
    obj.show_c();
    return 0;
}