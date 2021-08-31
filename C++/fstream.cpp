#include <fstream>
#include <iostream>
using namespace std;
int main () {
	char data[100];
	// open a file in write mode.
	ofstream outfile;
	outfile.open("afile.txt", ios::out);
	
	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);
	
	// write inputted data into the file.
	outfile << data << endl;
	
	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();
	// again write inputted data into the file.+
	outfile << data << endl;
	cout<<"file writing is completed" <<endl;

	// close the opened file.
	outfile.close();
	
	// open a file in read mode.
	ifstream infile;
	infile.open("afile.txt",ios::in);

	cout << "Reading from the file" << endl;
	infile >> data;
	// write the data at the screen.
	cout << data << endl;
	// again read the data from the file and display it.
	infile >> data;
	cout << data << endl;
	// close the opened file.
	infile.close();

	return 0;
}
/*
	OUTPUT:
	Writing to the file
	Enter your name: Abhilash Movva
	Enter your age: 19
	file writing is completed
	Reading from the file
	Abhilash
	Movva

*/
