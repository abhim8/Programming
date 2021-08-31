#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    for(int i=0; i<s.length(); i++) {
        char c = s[i];
        if(c>='a' && c<='z'){
            s[i] = toupper(c);
        }
        else if(c>='A' && c<='Z'){
            s[i] = tolower(c);
        }
    }
    cout << s << endl;
    return 0;
}
