#include<iostream>
using namespace std;
class st{
    public:
    char* str;
    int leng;
    st(){
    }
    st(char* str){
        int i=0;
        while(str[i++]!='\0');
        leng=i;
        this->str=new char[i];
        for(int j=0;j<i;j++){
            this->str[j]=str[j];
        }
    }
    st operator+(st ob){
        char *strr =new char[leng+ob.leng-1];
        cout<<leng+ob.leng-1<<endl;
        int k=0;
        for(int j=0;j<leng-1;j++){
            strr[k++]=this->str[j];
        }
        for(int j=0;j<ob.leng;j++){
            strr[k++]=ob.str[j];
        }
        str[k]='\0';
        st temp(strr);
        return temp;
    }
    void display(){
        cout<<str;
    }
};
int main(){
    char str[]="hello";
    char str1[]="abjncljse";
 st ob(str);
 st ob1(str1);
 st ob2;
 ob2=ob+ob1; 
 ob2.display(); 
}