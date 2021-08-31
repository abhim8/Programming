/* 
    Note: A Harshad number is an integer, that is divisible by the sum of its digits.
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n; cin >> n;
    if(n==1) cout << "Yes\n";
    else{
        long t=n, sum=0;
        while(t>0){
            long r = t%10;
            sum += r;
            t /= 10;
        }
        if((n%sum)==0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
