#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculate(int){}
    virtual void calculate(int,int){}
};
class circle:public shape{
    public:
    void calculate(int a){
        cout<<"area of circle:"<<a*a*3.14<<endl;
    }
};
class square:public shape{
    public:
    void calculate(int a){
        cout<<"area of sqare:"<<a*a<<endl;
    }
};
class triangle:public shape{
    public:
    void calculate(int a,int b){
        
        cout<<"area of triangle:"<<0.5*b*a<<endl;
    }
};
int main(){
    shape *ob;
    circle ob1;
    square ob2;
    triangle ob3;
    ob=&ob1;
    ob->calculate(8);
    ob=&ob2;
    ob->calculate(3);
    ob=&ob3;
    ob->calculate(8,4);
}
