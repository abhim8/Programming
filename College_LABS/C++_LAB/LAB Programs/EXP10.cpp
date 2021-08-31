/*
    Write a C++ program to create an array of pointers. Invoke functions using array
    objects.
*/

#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"class A show()"<<endl;
    }
};

class B: public A{
    public:
    void show(){
        cout<<"class B show()"<<endl;
    }
};

class C: public B{
    public:
    void show(){
        cout<<"class C show()"<<endl;
    }
};

class D: public C{
    public:
    void show(){
        cout<<"class D show()"<<endl;
    }
};

int main(){
    A a; B b; C c; D d;
    A *p[] = {&a, &b, &c, &d};
    for(int i=0; i<4; i++)
        p[i]->show();
    return 0;
}