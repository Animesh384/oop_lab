#include<iostream>
#include<string>
using namespace std;
class emp{
    int id;
    string name;
    int age;
    double bs;
    public:
    emp(){
        cout<<"enter a id:";
        cin>>id;
        cout<<"enter name:";
        cin>>name;
        cout<<"entr a  age:";
        cin>>age;
        cout<<"enter a base salary:";
        cin>>bs;
    }
    void display(){
        double gs=bs+bs*0.8+bs*0.2;
        printf("%d\t%s\t%d\t%.2f\t%.2f\n",id,name,age,bs,gs);
    }

};
int main(){
 emp ob1[6];
 cout<<"id\tname\tage\tbase\tgros"<<endl;
 for(int i=0;i<6;i++){
    (ob1+i)->display();
 }
}