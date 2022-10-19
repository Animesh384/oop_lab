#include<iostream>
using namespace std;
class postpree{
    public:
    int i,j;
    postpree(){
        cout<<"enter value i j:"<<endl;
        cin>>i>>j;
    }
    void operator ++(){
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
    ob.display();1
    return 0;
}