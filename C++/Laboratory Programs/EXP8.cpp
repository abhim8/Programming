/*
    Write a C++ program to allocate memory using new operator.
*/

#include<iostream>
using namespace std;
class Rectangle{
    int length, width;
    public:
    Rectangle(){
        length = 2;
        width = 5;
    }
    Rectangle(int l, int w){
        length = l;
        width = w;
    }
    void area(){
        cout<<"Area of Rectangle is "<<length * width<<endl;
    }
};

int main(){
    Rectangle *obj_1, *obj_2;
    obj_1 = new Rectangle();
    obj_2 = new Rectangle(3,10);
    obj_1->area();
    obj_2->area();
    return 0;
}