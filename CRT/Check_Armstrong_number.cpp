#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,rem,sum=0,t,cnt=0;
    cin >> n;
    
    // counting digits
    t=n;
    while(t!=0){ cnt++; t=t/10; }
    
    // arm strong check
    t=n;
    while(t!=0){
        rem=t%10;
        sum=sum+ceil(pow(rem,cnt));
        t=t/10;
    }
    
    if(sum==n) cout << "Yes" <<endl;
    else cout << "No" <<endl;
    return 0;
}
