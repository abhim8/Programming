#include <iostream>
#include<sstream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	stringstream ss;
    int nint = 2019;
    double ndouble = 3.41;
    ss<<nint<<" "<<ndouble;
    string mystr1, mystr2;
    ss>>mystr1;
    ss>>mystr2;
    cout<<"The numeric values converted to string: "<<endl;
    cout<<"mystr1 = "<<mystr1<<" "<<"mystr2 = "<<mystr2<<endl;
    stringstream ns;
    ns<<"2019 3.14";
    int nintval;
    double ndoubleval;
    ns>>nintval>>ndoubleval;
    cout<<"the string values converted to numeric types: "<<endl;
    cout<<"Intval = "<<nintval<<" "<<"ndoubleval = "<<ndoubleval<<endl;
	return 0;
}
