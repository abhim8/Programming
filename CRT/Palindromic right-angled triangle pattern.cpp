#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << char(j+65) << " ";
        }
        for(int k=i-1; k>=0; k--){
            cout << char(k+65) << " ";
        }
        cout << "\n";
    }
    return 0;
}
