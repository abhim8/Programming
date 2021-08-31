#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isRepeating(int a[], int n, int key){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(key == a[i]) cnt++;
    }
    if(cnt>=2) return false;
    else return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        if(isRepeating(a,n,a[i]) ){
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
