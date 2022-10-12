#include<iostream>
using namespace std;
class dist{
    
    public:
    int k;
    int m;
    dist();
    dist(int a,int b);
    void input(int a,int b);
    void display();
};
dist::dist(){
    k=0;
    m=0;
}
dist::dist(int a,int b){
    while(b>1000){
        a++;
        b-=1000;
    }
    k=a;m=b;
}
void dist::input(int a,int b){
    while(b>1000){
        a++;
        b-=1000;
    }
    k=a;m=b;
}
void dist::display(){
    cout<<k<<" "<<m<<endl;
}
int main(){
    dist ob(4,5);
    ob.display();
    return 0;
}