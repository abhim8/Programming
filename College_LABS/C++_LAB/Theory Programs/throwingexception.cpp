#include<iostream>
using namespace std;
double division(int a, int b){
    if(b==0)
        throw "Division by zero condition!!";
        //throw 25;
    return (a/b);
}
int main(){
    int a=5, b=0;
    try{
        double res = division(a,b);
        cout<<res<<endl;
    }
    catch(const char* s){
        cerr<<s<<endl;
    }
    catch(...){
        cerr<<"caught by Ellipses operator";
    }
    // catch(const std::exception& e) {
    //     std::cerr << e.what() << '\n';
    // }
    return 0;
}