#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long n, i;
    cin >> n >> i;
    if (n & (1 << (i ))){
        cout << "true\n";  
    } 
    else cout << "false\n";
    return 0;
}
