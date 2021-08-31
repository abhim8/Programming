#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, key; cin >> n >> key;
    int a[n], index=-1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(key==a[i])
            index=i;
    }
    cout << index << endl;
    return 0;
}
