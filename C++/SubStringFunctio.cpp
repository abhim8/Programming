#include <bits/stdc++.h>
using namespace std;


int main() {
	
    string str = "Geeks love GeeksforGeeks";
    vector<string> words;
    
    int len, start = -1, n = str.size();
    
    for(int i = 0 ; i < n ; i++){
        if(str[i] == ' '){
            len = (i - 1 ) - (start + 1) + 1;
            words.push_back(str.substr(start + 1, len));
            start = i;
        }
    }
    
    len = (n-1) - (start + 1) + 1;
    words.push_back(str.substr(start + 1, len));
    
    for(auto word : words){
        cout<< word << "\n";
    }
    
	
	return 0;
}