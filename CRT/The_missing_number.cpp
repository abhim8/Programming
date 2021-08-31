#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[100]={0};
    for(int i=1; i<=100; i++){
        int n; cin >> n;
        a[n]=n;
    }
    for(int i=1; i<=100; i++){
        if(a[i]==0){ cout << i << endl; break; }
    }
    return 0;
}
