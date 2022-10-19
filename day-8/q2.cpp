#include<iostream>
using namespace std;
class postpree{
    public:
    int i,j;
    postpree(){
        cout<<"enter value i j:"<<endl;
        cin>>i>>j;
    }
    void operator++(){
        i++;
        j++;
    }
    void operator++(int){
        i++;
        j++;
    }
    void display(){
        cout<<i<<" i"<<j<<endl;
    } 
};
int main(){
    postpree ob;
    ++ob;
    ob.display();
    ob++;
    ob.display();
    return 0;
}