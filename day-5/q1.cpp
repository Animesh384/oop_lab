#include<iostream>
using namespace std;

class a{
int var;
public:
a(){
    cin>>var;
 }
 int get(){return var;}
 void set(int var){this->var=var;}
void show(){
    cout<<var<<" ";
}
};
class b{
    int var;
public:

b(){
    cin>>var;
}
int get(){return var;}
void set(int var){this->var=var;}
void swap(a &ob){
    int temp;
    temp=var;
    var=ob.get();
    ob.set(temp);
}
void show(){
    cout<<var<<endl;
}
};
int main(){
    a ob1;
    b ob2;
    ob2.swap(ob1);
    ob1.show();
    ob2.show();
    return 0;
}