#include<iostream>
#include<string>
using namespace std;
class shop{
    public:
    string cname;
    float price;

};
class TwoWheeler:public shop{
    public:
    const int wheel=2;
};
class Threewheeler:public shop{
    public:
    const int wheel=3;
};
class four:public shop{
    public:
    const int wheel=4;
};

class autom:public TwoWheeler,public Threewheeler{
    bool var=1;
};
class manual:public TwoWheeler,public Threewheeler,public four{
    bool var=0;
};
int main(){
    bool var;
    cin>>var;
    cout<<var;
}