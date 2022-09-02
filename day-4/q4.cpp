#include<iostream>
using namespace std;
inline void findquarqub(int n){
    cout<<"cube:"<<n*n*n<<endl;
    cout<<"squar:"<<n*n<<endl;
}
int main(){
    int n;
    cin>>n;
    findquarqub(n);
    return 0;
}