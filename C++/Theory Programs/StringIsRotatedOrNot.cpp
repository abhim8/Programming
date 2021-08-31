#include <bits/stdc++.h>
using namespace std;


int main() {
	
    string A = "ABCD";
    string B = "DABC";
    
    if(A.length() != B.length()){
        cout<< "No" << endl;
        return 0;
    }
    
    string temp = A + A;
    
    if(temp.find(B) != string::npos){
        cout<< "Yes" << endl;
    }
    else {
        cout<< "No" << endl;
    }
    
    
	
	return 0;
}
