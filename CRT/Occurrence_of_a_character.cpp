#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; getline(cin, s);
    char key; cin >> key;
    int occurance=0;
    int len = s.length();
    for(int i=0; i<len; i++){
        char c = s[i];
        if(c==key) occurance++;
    }
    cout << occurance << endl;
    return 0;
}
