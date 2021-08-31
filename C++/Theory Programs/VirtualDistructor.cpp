#include<iostream>
using namespace std;
class base{
    public:
    base(){cout<<"Constructing Base\n";}
    virtual ~base(){cout<<"Destructing Base\n";}
};
class derived: public base{
    public:
    derived(){cout<<"Constructing Derived\n";}
    ~derived(){cout<<"Destructing Derived\n";}
};
int main(){
    derived *d = new derived();
    base *b = d;
    delete b;
    return 0;
}
