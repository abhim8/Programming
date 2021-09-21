Max element in the array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], max=0;
    for(int i=0; i<n; i++) cin >> a[i];
    max = a[0];
    for(int i=1; i<n; i++){ if(a[i]>max) max=a[i]; }
    cout << max << endl;
    return 0;
}



Print unique elements of array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isRepeating(int a[], int n, int key){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(key == a[i]) cnt++;
    }
    if(cnt>=2) return false;
    else return true;
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        if(isRepeating(a,n,a[i]) ){
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}


Reverse array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printReverse(long long a[], long long n){
    long long i=n-1;
    if(i>=0) {
        cout << a[i] << " ";
        printReverse(a,i);
    }
}
int main() {
    long long n; cin >> n;
    long long a[n];
    for(long long i=0; i<n; i++) cin >> a[i];
    printReverse(a,n);
    cout << endl;
    return 0;
}



Sum of all odd elements
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n], sum=0;
    for(int i=0; i<n; i++){
        cin >> a[i]; 
        if(a[i]%2!=0){
            sum += a[i];   
        }
    } 
    cout << sum << endl;
    return 0;
}



Find duplicate element in array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isDuplicate(int a[], int n, int key){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(key == a[i]) cnt++;
    }
    if(cnt>=2) return true;
    else return false;
}
int main() {
    int n; cin >> n;
    int a[n], duplicate=0; 
    for(int i=0; i<n; i++) cin >> a[i]; 
    for(int i=0; i<n; i++){
        if(isDuplicate(a, n, a[i])){
            duplicate = a[i];
            break;
        }
    }
    cout << duplicate << endl;
    return 0;
}


Matrix Row Sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m; cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        int rowsum=0;
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            rowsum += a[i][j];
        }
        cout << rowsum << endl;
    }
    return 0;
}



Matrix column sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n,m; cin >> n >> m;
    long long a[n][m], colsum=0, i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            colsum = colsum + a[j][i];
        }
        cout << colsum << "\n";
        colsum=0;
    }
    return 0;
}




Sum of two matrices
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m; cin >> n >> m;
    int a[n][m], b[n][m], sum[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> b[i][j];
            sum[i][j]=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum[i][j] += (a[i][j]+b[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



Transpose matrix
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n,m; cin >> n >> m;
    long long a[n][m], t[n][n], i ,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout << a[j][i] << " ";
        } 
        cout << endl;
    }
    return 0;
}



A sparse matrix
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int half = (n*m)/2, cnt = 0;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            if(a[i][j]==0) cnt++;
        }
    }
    if(cnt>half) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}



Check bit
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    unsigned long long n, i;
    cin >> n >> i;
    if (n & (1 << i )){
        cout << "true\n";  
    } 
    else cout << "false\n";
    return 0;
}


Digits sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
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



Compute area of rectangle
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long l,b;
    cin >> l >> b;
    cout << l*b << endl;
    return 0;
}




Triangle validator
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long a,b,c; cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a)
        cout << "No\n";
    else
        cout << "Yes\n";
    return 0;
}




Compute a power b.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long power(long long a, long long b){
    if(b==0) return 1;
    else if (b % 2 == 0)
        return power(a, b / 2) * power(a, b / 2);
    else
        return a * power(a, b / 2) * power(a, b / 2);
}
int main() {
    long long a,b;
    cin >> a >> b;
    cout << power(a,b) << endl;
    return 0;
}




The missing number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[100]={0};
    for(int i=1; i<=100; i++){
        int n; cin >> n;
        a[n]=n;
    }
    for(int i=1; i<=100; i++){
        if(a[i]==0){ cout << i << endl; break; }
    }
    return 0;
}




Compute N!
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, fact=1;
    cin >> n;
    int t = n;
    while(t--){
        fact *= n;
        n--;
    }
    cout << fact << endl;
    return 0;
}



Long factorial
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long n, fact=1;
    cin >> n;
    long t = n;
    while(t--){
        fact *= n;
        n--;
    }
    cout << fact << endl;
    return 0;
}




Compute fibonacci number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a=0,b=1,n;
    cin >> n;
    for(int i=2; i<=n; i++){
        int c=a+b; a=b; b=c;
    }
    cout << b << endl;
    return 0;
}




Number of multiples
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long countOfMultiples(unsigned long n){ return (n/3 + n/5 - n/15); }
int main() {
    unsigned long n; cin >> n;
    cout << countOfMultiples(n) << endl;
    return 0;
}



Natural numbers sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = ( n*(n+1) )/2;
    cout << sum << endl;
    return 0;
}



Squares sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = ( n*(n+1)*(2*n+1) )/6;
    cout << sum << endl;
    return 0;
}



Cubes sum
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = pow( (n*(n+1)/2),2 ) ;
    cout << sum << endl;
    return 0;
}




Check Armstrong number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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




Narcissistic numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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





Harshad numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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




Prime Or Not
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if(n==1) cout << "No" << endl;
    else {
        long long flag=0;
        for(long long i=2; i<=sqrt(n); i++){
            if(n%i==0) flag=1;
        }
        if(flag==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    
    }
    return 0;
}



Number reverse
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main() {
    long long n, rev_num = 0;
    cin >> n;
    bool nflag = false;
    if (n<0){
        nflag = true;
        n = -n;
    } 
    while (n != 0) {
        int r = n % 10;
        rev_num = (rev_num * 10) + r; 
        n = n / 10;
    }
    cout << ( (nflag == true) ? -rev_num : rev_num) << endl;
    return 0;
}



Right-angled triangle pattern 1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,val=1;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << val << " "; val++;
        }
        cout << endl;
    }
    return 0;
}




Right-angled triangle pattern 2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,val,diff;
    cin >> n;
    for(int i=1; i<=n; i++){
        val=i; diff=n-1;
        for(int j=1; j<=i; j++){
            cout << val << " "; val+=diff;
            diff--;
        }
        cout << endl;
    }
    return 0;
}




Hollow rectangle pattern
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int w,l; cin >> w >> l;
    for(int i=1; i<=l; i++){
        for(int j=1; j<=w; j++){
            if (i == 1 || i == l || j == 1 || j == w)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}




Print half diamond pattern
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i=1; i<n; i++) {
        for (int j=i; j<n; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}



Rectangle pattern
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int place_val=1;
    for(int i=0; i<n; i++){
        for(int j=n; j>=1; j--){
            if(j==place_val) { cout << "*"; }
            else cout << j;
        }
        cout << endl;
        place_val++;
    }
    return 0;
}




Print pyramid pattern
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}




Inverted pyramid pattern
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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






Palindromic right-angled triangle pattern
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << char(j+65) << " ";
        }
        for(int k=i-1; k>=0; k--){
            cout << char(k+65) << " ";
        }
        cout << "\n";
    }
    return 0;
}



Print multiplication table
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long n; cin >> n;
    for(long i=1; i<=10; i++){
        cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0;
}




Reverse string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s; cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}



Odd even index
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s; cin >> s;
    for(int i=0; i<s.length(); i++){
        if(i%2!=0) cout << s[i];
    }
    for(int i=0; i<s.length(); i++){
        if(i%2==0) cout << s[i];
    }
    return 0;
}




Occurrence of a character
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
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




Vowels in a string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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




Digits in a string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s; cin >> s;
    bool hasOnlyNumbers = true;
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c>=48 && c<=57) continue;
        hasOnlyNumbers = false;
        break;
    }
    if(hasOnlyNumbers) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}




Count vowels and consonants
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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





Letters of the alphabet
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s; cin >> s;
    int alphabets[26]={0}, count=0;
    for(int i=0; i<s.length(); i++) {
        char c = s[i];
        if(c>='a' && c<='z'){
            count += !alphabets[c-'a'];
            alphabets[c-'a']=1;
        }
        else if(c>='A' && c<='Z'){
            count += !alphabets[c-'A'];
            alphabets[c-'A']=1;
        }
    }
    if(count==26) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

Toggle case of characters
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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



Letter repetition
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    cout << "G";
    for(int i=0; i<n; i++){
        cout << "o";
    }
    cout << "d\n";
    return 0;
}




Linear search on array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, key; cin >> n >> key;
    int a[n], index=-1;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(key==a[i])
            index=i;
    }
    cout << index << endl;
    return 0;
}




Prefix and suffix
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
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




Compress a string
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s; cin >> s;
    int cnt=1;
    for(int i=0; i<s.length(); i++){ 
        char c=s[i], c1=s[i+1];
        if(c==c1) cnt++;
        else {
            cout << c << cnt;
            cnt=1;
        }
    }
    cout << endl;
    return 0;
}





Binary search on array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, key; cin >> n >> key;
    int a[n];
    int index=-1;
    for(int i=0; i<n; i++) cin >> a[i];
    int low=0, high=n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(a[mid]==key){ index=mid; break;}
        else if(key<a[mid]){
            high = mid-1;
            
        }
        else if(key>a[mid]){
            low = mid+1;
        }
    }
    if(index!=-1) cout << "true\n";
    else cout << "false\n";
    return 0;
}
