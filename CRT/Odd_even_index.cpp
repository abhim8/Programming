#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    for(int i=0; i<s.length(); i++){
        if(i%2!=0) cout << s[i];
    }
    for(int i=0; i<s.length(); i++){
        if(i%2==0) cout << s[i];
    }
    return 0;
}
