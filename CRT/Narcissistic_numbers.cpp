/* 
    Note: A narcissistic number is a number that is the sum of its own digits each raised to the power of the number of digits
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
    if(n==0) cout << "Yes\n";
    else if(n==1) cout << "Yes\n";
    else{
        long t=n, cnt=0, sum=0;
        while(t>0){
            cnt++;
            t /= 10;
        }
        t=n;
        while(t>0){
            long r = t%10;
            sum += pow(r,cnt);
            t /= 10;
        }
        if(sum==n) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
