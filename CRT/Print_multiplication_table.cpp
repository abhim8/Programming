#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n; cin >> n;
    for(long i=1; i<=10; i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0;
}
