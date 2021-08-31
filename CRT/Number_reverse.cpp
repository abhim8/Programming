#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n, rev_num = 0;
    cin >> n;
    bool nflag = false;
    if (n<0){
        nflag = true;
        n = -n;
    } 
    while (n != 0) {
        int r = n % 10;
        rev_num = (rev_num * 10) + r; 
        n = n / 10;
    }
    cout << ( (nflag == true) ? -rev_num : rev_num) << endl;
    return 0;
}
