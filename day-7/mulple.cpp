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
class c{
    public:
    c(){
        cout<<"class c"<<endl;
    }
    ~c(){
        cout<<"class c destructor"<<endl;
    }
};
class b:public a,public c{
    public:
    b(){
        cout<<"class b"<<endl;
    }
    ~b(){
        cout<<"class b destructor"<<endl;
    }
};
int main(){
    b ob1;
};