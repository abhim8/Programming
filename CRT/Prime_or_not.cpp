#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    cin >> n;
    if(n==1) cout << "No" << endl;
    else {
        long long flag=0;
        for(long long i=2; i<=sqrt(n); i++){
            if(n%i==0) flag=1;
        }
        if(flag==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    
    }
    return 0;
}
