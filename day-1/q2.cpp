#include<iostream>
using namespace std;
class student
{
    char name[20];
    int rollno;
    int *marks=new int[5];
    public:
    student()
    {
         cout<<"name RllNo sub1,2,3,4,5"<<endl;
        cin>>name>>rollno>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
    }
    void display()
    {
        int total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
        cout<<"name: "<<name<<" roll no: "<<rollno<<" total marks:"<<total<<" pecentage:"<<total/5<<"%"<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number student:";
    cin>>n;
    student *s1=new student[n];
    for(int i=0;i<n;i++)
    {
        (s1+i)->display();
    }
    //s1[0].display();
   // s1[1].display();

    return 0;
}