#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b,c; cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a)
        cout << "No\n";
    else
        cout << "Yes\n";
    return 0;
}
