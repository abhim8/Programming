/*
    Write a C++ program to declare a class. Declare pointer to class. Initialize and display
    the contents of the class member.
*/

#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length, breadth;
    void initialize(int len, int bre){
        length = len;
        breadth = bre;
    }
    int getArea(){
        return 2*length*breadth;
    }
    void display(){
        int area = getArea();
        cout<<"\n*** Rectangle Information ***\n";
        cout<<"Length = "<<length;
        cout<<"\nBreadth = "<<breadth;
        cout<<"\nArea = "<<area;
        cout<<"\n---------------\n";
    }
};

int main(){
    Rectangle rect, *class_ptr;
    class_ptr = &rect;

    //Accessing member functions using class pointer
    cout<<"\nUsing member functions access";
    class_ptr->initialize(10,5);
    class_ptr->display();

    //Accessing data members using class pointer 
    cout<<"\n Using data members access";
    class_ptr->length = 2;
    class_ptr->breadth = 3;
    class_ptr->initialize(class_ptr->length, class_ptr->breadth);
    class_ptr->display();

    return 0;
}