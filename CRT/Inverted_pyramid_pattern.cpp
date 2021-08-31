#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    for (int i=1; i<=n; i++){
      for (int j=i; j<=n; j++){
          if((i==1) || (j==i) || (j==n)) cout << "* ";
          else cout << "  ";
      }
      cout << "\n";
   }
    return 0;
}
