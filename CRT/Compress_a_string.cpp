#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    int cnt=1;
    for(int i=0; i<s.length(); i++){ 
        char c=s[i], c1=s[i+1];
        if(c==c1) cnt++;
        else {
            cout << c << cnt;
            cnt=1;
        }
    }
    cout << endl;
    return 0;
}
