#include<iostream>
using namespace std;
class hello
{
    char name[10];
    public:
    hello(int a){
        cin>>name;
      cout<<name<<" hello";
    }
    hello(){
        cin>>name;
      cout<<name<<" hello";
    }
};
int main()
{
    hello var;
    hello var1(10);
}
