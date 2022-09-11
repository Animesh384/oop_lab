#include<iostream>
using namespace std;
class countfun{
    int data;
    public:
    static int count1,count2;
    int get(){
        cout<<data<<endl;
        count1++;
        return data;
    }
    void set(int data){
        this->data=data;
        count2++;
    }
};
int countfun::count1=0;
int countfun::count2=0;
int main(){
    countfun obj;
    obj.set(5);
    obj.get();
    countfun obj1;
    obj1.set(6);
    obj1.get();
    cout<<countfun::count1<<endl;
    cout<<countfun::count2<<endl;
    return 0;
}