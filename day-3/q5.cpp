#include<iostream>
using namespace std;
class dis{
    public:
    int feet;
    int inch;
    void input(){
        cout<<"enter  feet element:"<<endl;
        cin>>feet;
        cout<<"enter  inch element:"<<endl;
        cin>>inch;
        while(inch>=12){
            feet++;
            inch=inch-12;
        }
    }
    void output(){
        cout<<"feet:"<<feet;
        cout<<"inch:"<<inch<<endl;
    }
    void sum(dis &ob1,dis &obj2){
        int sum1=ob1.inch+obj2.inch;
        int sum2=ob1.feet+obj2.inch;
        while(sum1>=12){
            sum2++;
            sum1=sum1-12;
        }
        cout<<"feet:"<<sum2<<endl;
        cout<<"inch:"<<sum1<<endl;
    }
    

};
int main(){
    dis ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob3.sum(ob1,ob2);
}