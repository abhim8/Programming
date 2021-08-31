#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int w,l; cin >> w >> l;
    for(int i=1; i<=l; i++){
        for(int j=1; j<=w; j++){
            if (i == 1 || i == l || j == 1 || j == w)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
