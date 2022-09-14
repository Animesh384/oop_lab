#include<iostream>
#include<string>
using namespace std;
class staf{
    public:

        int code;
        string name;
};
class teacher:public staf{
    public:
        string sub;
        string publication;
        void input(){
            cout<<"Enter id:";
            cin>>code;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter sub:";
            cin>>sub;
            cout<<"Enter publication:";
            cin>>publication;
        }
        void display(){
            cout<<code<<endl;
            cout<<name<<endl;
            cout<<sub<<endl;
            cout<<publication<<endl;
        }
};
class office:public staf{
    public:
        int grade;
        void input(){
            cout<<"Enter id:";
            cin>>code;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter sub:";
            cin>>grade;
        }
        void display(){
            cout<<code<<endl;
            cout<<name<<endl;
            cout<<grade<<endl;
        }
};
class typist:public staf{
    public:
        int speed;
};
class regular:public typist{
    public:
    void input(){
            cout<<"Enter id:";
            cin>>code;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter sub:";
            cin>>speed;
        }
        void display(){
            cout<<code<<endl;
            cout<<name<<endl;
            cout<<speed<<endl;
        }
};
class casual:public typist{
    public:
        int daily;
        float wages;
        void input(){
            cout<<"Enter id:";
            cin>>code;
            cout<<"Enter name:";
            cin>>name;
            cout<<"Enter sub:";
            cin>>speed;
            cout<<"daily:";
            cin>>daily;
            cout<<"wages:";
            cin>>wages;
        }
        void display(){
            cout<<code<<endl;
            cout<<name<<endl;
            cout<<speed<<endl;
            cout<<daily<<endl;
            cout<<wages<<endl;
        }
};
int main(){
    teacher ob1;
    ob1.input();
    ob1.display();
    office ob2;
    ob2.input();
    ob2.display();
    regular ob3;
    ob3.input();
    ob3.display();
    casual ob4;
    ob4.input();
    ob4.display();
    return 0;
}
