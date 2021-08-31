#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m; cin >> n >> m;
    int a[n][m], b[n][m], sum[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> b[i][j];
            sum[i][j]=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum[i][j] += (a[i][j]+b[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
