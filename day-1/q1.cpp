#include<iostream>
using namespace std;
class hello
{
    char name[10];
    public:
    hello(){
        cin>>name;
      cout<<name<<" hello";
    }
};
int main()
{
    hello var;
}
