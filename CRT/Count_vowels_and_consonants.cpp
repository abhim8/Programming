#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    int vowelsCount=0, consonantsCount=0;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ||
           c=='a' || c=='e' || c=='i' || c=='o' || c=='u') vowelsCount++;
        else consonantsCount++;
    }
    cout << vowelsCount << " " << consonantsCount << endl;
    return 0;
}
