#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m; cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        int rowsum=0;
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            rowsum += a[i][j];
        }
        cout << rowsum << endl;
    }
    return 0;
}
