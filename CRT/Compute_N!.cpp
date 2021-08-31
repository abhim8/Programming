#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, fact=1;
    cin >> n;
    int t = n;
    while(t--){
        fact *= n;
        n--;
    }
    cout << fact << endl;
    return 0;
}
