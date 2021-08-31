/* 
    Given a string, compute the length of longest proper prefix which is same as the suffix of the given string.

    Input Format
    Input contains a string S, consisting of only lowercase characters.

    Constraints
    1 <= len(S) <= 100

    Output Format
    Print length of longest proper prefix which is same as suffix of the given string.

    Sample Input 0
    smartintsmart

    Sample Output 0
    5

    Explanation 0
    Self Explanatory
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s; cin >> s;
    int n = s.length();     
    if(n<2) cout << 0 << endl;
    else {
        int n = s.length();
        int len = 0, i = 1;
        int a[n]={0};
        while(i < n){
            if(s[i] == s[len]){
                len++;
                a[i] = len;
                i++;
            }
            else{
                if(len!=0){
                    len = a[len-1];
                }
                else{
                    a[i]=0;
                    i++;
                }
            }
        }
        cout << a[n-1] << endl;
    }
    return 0;
}
