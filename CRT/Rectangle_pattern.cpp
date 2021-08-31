#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int place_val=1;
    for(int i=0; i<n; i++){
        for(int j=n; j>=1; j--){
            if(j==place_val) { cout << "*"; }
            else cout << j;
        }
        cout << endl;
        place_val++;
    }
    return 0;
}
