#include <iostream>
using namespace std;

class cl{
	static int resourse;
    public:
    static int get_resource();
    void free_resourse(){ resourse = 0; }
};

int cl::resourse;
int cl::get_resource(){
    if(resourse)
        return 0;
    else{
        resourse = 1;
        return 1;
    }
}

int main() {
	
    // your code goes here
    cl obj1,obj2;
    
    if(cl::get_resource())
        cout<<"obj1 has resourse"<<endl;
    
    if(!cl::get_resource())
        cout<<"obj2 has denied resourse"<<endl;
    
    obj1.free_resourse();
    
    if(obj2.get_resource())
        cout<<"obj2 can now use resourse"<<endl;

	return 0;
}
