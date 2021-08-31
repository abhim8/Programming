#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int a[n], max=0;
    for(int i=0; i<n; i++) cin >> a[i];
    max = a[0];
    for(int i=1; i<n; i++){ if(a[i]>max) max=a[i]; }
    cout << max << endl;
    return 0;
}
