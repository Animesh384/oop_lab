#include<iostream>
using namespace std;
inline void increase(int &n){
    n++;
}
int main(){
    int n;
    cin>>n;
    increase(n);
    cout<<n;
}