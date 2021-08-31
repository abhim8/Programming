#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long sum=0, len=0;
    string s;
    cin >> s;
    len = s.size();
    for(long long i=0; i<len; i++){
        char c = s[i];
        int n = c - '0';
        sum += n;
    }
    cout << sum << endl;

    return 0;
}

