#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long power(long long a, long long b){
    if(b==0) return 1;
    else if (b % 2 == 0)
        return power(a, b / 2) * power(a, b / 2);
    else
        return a * power(a, b / 2) * power(a, b / 2);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,b;
    cin >> a >> b;
    cout << power(a,b) << endl;
    return 0;
}
