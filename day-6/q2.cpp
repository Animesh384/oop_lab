#include<iostream>
#include<string>
using namespace std;
class shop{
    public:
    string cname;
    float price;
    int aut;
    shop(){
        cin>>cname;
        cin>>price;
        cin>>aut;
    }
    void display(){
        cout<<"car name:"<<cname<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"automatic:"<<aut<<endl;
    }
};
class TwoWheeler: public shop{
    public:
    const int wheel=2;
    void display(){
        shop::display();
        cout<<"wheel:"<<wheel<<endl;
    } 
};
class Threewheeler: public shop{
    public:
    const int wheel=3;
    void display(){
        shop::display();
        cout<<"wheel:"<<wheel<<endl;
    } 
};
class four: public shop{
    public:
    const int wheel=4;
    four(){
    aut=2;
    }
    void display(){
        shop::display();
        cout<<"wheel:"<<wheel<<endl;
    } 
};
int main(){
    TwoWheeler ob1;
    ob1.display();
}