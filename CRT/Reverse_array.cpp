#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printReverse(long long a[], long long n){
    long long i=n-1;
    if(i>=0) {
        cout << a[i] << " ";
        printReverse(a,i);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n; cin >> n;
    long long a[n];
    for(long long i=0; i<n; i++) cin >> a[i];
    printReverse(a,n);
    cout << endl;
    return 0;
}
