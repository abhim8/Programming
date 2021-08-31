#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int a[], int n, int key){
    // for(int i=0; i<n; i++){
    //     int temp;
    //     if(a[i]>a[i+1]){
    //         temp = a[i];
    //         a[i] = a[i+1];
    //         a[i+1] = temp;
    //     }
    // }
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, key; cin >> n >> key;
    int a[n];
    int index=-1;
    for(int i=0; i<n; i++) cin >> a[i];
    // cout << binarySearch(a,n,key) << endl;
    int low=0, high=n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(a[mid]==key){ index=mid; break;}
        else if(key<a[mid]){
            high = mid-1;
            
        }
        else if(key>a[mid]){
            low = mid+1;
        }
    }
    if(index!=-1) cout << "true\n";
    else cout << "false\n";
    return 0;
}
