#include<iostream>
using namespace std;
class ab{
    public:
    void swap(int &a,int &b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    ab ob;
    ob.swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}