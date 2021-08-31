#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,val,diff;
    cin >> n;
    for(int i=1; i<=n; i++){
        val=i; diff=n-1;
        for(int j=1; j<=i; j++){
            cout << val << " "; val+=diff;
            diff--;
        }
        cout << endl;
    }
    return 0;
}
