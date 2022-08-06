#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll_no;
    int *sub=new int[6];
    int total;
    public:
    void input();
    void calculate(int*);
    void displaygrade();
};
void student::input(){
    cout<<"name:";
    getline(cin,name);
    cout<<"roll no";
    cin>>roll_no;
    cout<<"enter marks\n";
    for(int i=0;i<6;i++)
    {
        cin>>sub[i];
    }
}
void student::calculate(int *sub){
    total=0;
    for(int i=0;i<6;i++)
    {
        total=total+sub[i];
    }
}
void student::displaygrade(){
    calculate(sub);
    int grade=total/6;
    cout<<"grade:";
    if(grade>90) cout<<"o";
    else if(grade>80) cout<<"e";
    else if(grade>70) cout<<"a";
    else if(grade>60) cout<<"b";
    else if(grade>50) cout<<"c";
    else cout<<"f";
}
int main(){
    student st;
    st.input();
    st.displaygrade();

}