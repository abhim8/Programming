#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    bool hasOnlyNumbers = true;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c>=48 && c<=57) continue;
        hasOnlyNumbers = false;
        break;
    }
    if(hasOnlyNumbers) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
