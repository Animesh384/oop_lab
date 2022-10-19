#include<iostream>
using namespace std;
class dist{
    
    public:
    int f;
    int i;
    dist();
    dist(int a,int b);
    void input(int a,int b);
    dist operator +(dist ob);
    dist operator -(dist ob);
    void display();
};
dist::dist(){
    f=0;
    i=0;
}
dist::dist(int a,int b){
    while(b>12){
        a++;
        b-=12;
    }
    f=a;i=b;
}
void dist::input(int a,int b){
    while(b>12){
        a++;
        b-=12;
    }
    f=a;i=b;
}
dist dist::operator+(dist ob){
    int f1=f-ob.f;
    int i1=i-ob.i;
    while(i1<0){
        f--;
        i1+=12; 
    }
    dist temp(f1,i1);
    return temp;
}
void dist::display(){
    cout<<f<<" "<<i<<endl;
}
int main(){
    dist ob(12,23),ob1(32,34),ob2,ob3;
    ob2=ob+ob1;
    ob3=ob-ob1;
    ob2.display();
    ob3.display();
    return 0;
}