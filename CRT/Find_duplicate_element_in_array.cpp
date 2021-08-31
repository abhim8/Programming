#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isDuplicate(int a[], int n, int key){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(key == a[i]) cnt++;
    }
    if(cnt>=2) return true;
    else return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    int a[n], duplicate=0; 
    for(int i=0; i<n; i++) cin >> a[i]; 
    for(int i=0; i<n; i++){
        if(isDuplicate(a, n, a[i])){
            duplicate = a[i];
            break;
        }
    }
    cout << duplicate << endl;
    return 0;
}
