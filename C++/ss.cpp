#include<bits/stdc++.h>
using namespace std;
int main(){
    string mystr = "simple program to check you cpp strength";
    map<string,int> myMap;
    stringstream ss(mystr);
    string word;
    while(ss>>word)
        myMap[word]++;
    map<string,int>::iterator it;
    for(it=myMap.begin(); it!=myMap.end();it++)
        cout<<it->first<<"->"<<it->second<<"\n";
    return 0;
}
