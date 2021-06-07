#include<iostream>
#include<exception>
using namespace std;

class MyException: public exception{
    public:
    char *what(){ return "C++ Exception";}
};
int main(){
    try{
        throw MyException();
    }
    catch(MyException e){
        cout<<"MyException Caught"<<endl;
        cout<<e.what()<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// class demo{

// };
// int main(){
//     try{
//         throw demo();
//     }
//     catch(demo d){
//         cout<<"Caught exception of demo class"<<endl;
//     }
//     return 0;
// }