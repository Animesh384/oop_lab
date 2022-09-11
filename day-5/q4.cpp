#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll;
    public:
    int marks;
    student();
    static int avg;
    static void average(student*,int);
};
int student::avg=0;
student::student(){
        cout<<"name:";
        cin>>name;
        cout<<"roll no:";
        cin>>roll;
        cout<<"marks:";
        cin>>marks;
    }
void student::average(student* ob,int len){
    for(int i=0;i<len;i++){
        //cout<<(ob+i)->marks<<endl;
        student::avg=student::avg+ob[i].marks;
    }
    student::avg=student::avg/len;
}    
int main(){
    int n;
    cin>>n;
    student obj[n];
    obj->average(obj,n);
    /* student::average(obj,n); */
    cout<<"average marks:"<<student::avg;
}