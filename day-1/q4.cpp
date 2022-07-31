#include<iostream>
using namespace std;
class student
{
    char name[20];
    int rollno;
    int marks;
    public:
    student()
    {
         cout<<"name RllNo sub"<<endl;
        cin>>name>>rollno>>marks;
    }
    int display()
    {
        cout<<"name: "<<name<<" roll no: "<<rollno<<"marks:"<<marks<<endl;
        return marks;
    }
};
int main()
{
    int n;
    cout<<"enter number student:";
    cin>>n;
    student *s1=new student[n];
    int total=0;
    for(int i=0;i<n;i++)
    {
       total=total+(s1+i)->display();
    }
    cout<<"total marks:"<<total<<endl;
    //s1[0].display();
   // s1[1].display();

    return 0;
}