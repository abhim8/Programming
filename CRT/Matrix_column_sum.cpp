#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n,m; cin >> n >> m;
    long long a[n][m], colsum=0, i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            colsum = colsum + a[j][i];
        }
        cout << colsum << "\n";
        colsum=0;
    }
    return 0;
}
