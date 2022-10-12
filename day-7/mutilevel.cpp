#include<iostream>
using namespace std;
class a{
    public:
    a(){
        cout<<"class a"<<endl;
    }
    ~a(){
        cout<<"class a destructor"<<endl;
    }
};

class b:public a{
    public:
    b(){
        cout<<"class b"<<endl;
    }
    ~b(){
        cout<<"class b destructor"<<endl;
    }
};
class c:public b{
    public:
    c(){
        cout<<"class c"<<endl;
    }
    ~c(){
        cout<<"class c destructor"<<endl;
    }
};
int main(){
    c ob1;
};