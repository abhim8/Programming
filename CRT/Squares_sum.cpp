#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int sum = ( n*(n+1)*(2*n+1) )/6;
    cout << sum << endl;
    return 0;
}
