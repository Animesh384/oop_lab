#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class account{
    string name;
    int ac_no;
    char type[20];
    double balance;
    public:
    void input();
    void deposit(int);
    void withdraw(int);
};
void account::input(){
    cout<<"enter name:";
    getline(cin,name);
    cout<<" enter account_no";
    cin>>ac_no;
    int temp;
    cout<<"enter 1 for current account and 0 for saving account:";
    cin>>temp;
    if(temp==1) strcpy(type,"current");
    else if(temp==0)strcpy(type,"saving");
    balance=0.0;
}
void account::deposit(int depo){
    balance=balance+depo;
}
void account::withdraw(int amount){
    if(balance-amount<1000){
        cout<<"unsuccessfull due to low balance\n";
    }
    else{
       // cout<<name<<" type:"<<type<<" balance:"<<balance;
        cout<<"withdraw successful\n";
        balance=balance-amount;
         cout<<"name:"<<name<<" type:"<<type<<" acccount no:"<<ac_no<<" balance:"<<balance;
    }
}
int main(){
account ac;
ac.input();
int temp;
cout<<"enter the ammount to be deposit";
cin>>temp;
ac.deposit(temp);
cout<<"enter the ammount to be withdraw";
cin>>temp;
ac.withdraw(temp);
//ac.withdraw(1000);
}