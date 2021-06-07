/*
	Write a C++ Program to display Names, Roll No., and grades of 3 students who have 
	appeared in the examination. Declare the class of name, Roll No. and grade. Create an
	array of class objects. Read and display the contents of the array.
*/
#include <iostream>
using namespace std;
 
class student{
	int rollno;
	char name[30], grade;
	public:
	void read(int count){
		cout<<"\n\n----------- Enter Student "<<count+1<<" information ----------\n";
		cout<<"enter student name: ";
		cin>>name;
		cout<<"enter student roll no: ";
		cin>>rollno;
		cout<<"enter student grade(o,A,A+,B,C,D): ";
		cin>>grade;
	}
	void display(int count){
		cout<<"\ndetails of student "<<count+1;
		cout<<"\nname is: "<<name;
		cout<<"\nroll no is: "<<rollno;
		cout<<"\ngrade is: "<<grade<<endl;
	}
};

int main() {
	student std[3];
	for(int i=0; i<3; i++)
		std[i].read(i);
	cout<<"\nthe information of 3 students has been saved";
	cout<<"\n............................\n\n";
	for(int i=0; i<3; i++)
		std[i].display(i);
	return 0;

}
