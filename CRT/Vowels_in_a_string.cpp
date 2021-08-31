#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    bool hasOnlyVowels = true;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ||
           c=='a' || c=='e' || c=='i' || c=='o' || c=='u') continue;
        hasOnlyVowels = false;
        break;
    }
    if(hasOnlyVowels) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
