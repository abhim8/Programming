#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long countOfMultiples(unsigned long n){ return (n/3 + n/5 - n/15); }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long n; cin >> n;
    cout << countOfMultiples(n) << endl;
    return 0;
}
