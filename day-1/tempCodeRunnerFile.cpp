#include<iostream>
using namespace std;
class complex
{
    double real,img;
    public:
    void setdata()
    {
        
        cin>>real>>img;
    }
    void display()
    {
        char ch=((int)img>=0)?'+':' ';
        cout<<real<<" "<<ch<<img<<endl;
    }    
};
int main()
{
    complex c[10];
    cout<<"entering values"<<endl;
    cout<<"real img"<<endl;
    for(int i=0;i<10;i++)
    {
        c[i].setdata();
    }
    cout<<"output complex"<<endl;
    for(int i=0;i<10;i++)
    {
        c[i].display();
    }
}