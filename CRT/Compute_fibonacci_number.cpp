#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a=0,b=1,n;
    cin >> n;
    for(int i=2; i<=n; i++){
        int c=a+b; a=b; b=c;
    }
    cout << b << endl;
    return 0;
}
