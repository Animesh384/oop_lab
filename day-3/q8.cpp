#include<iostream>
#include<math.h>
using namespace std;


class dist{
    float x=0, y=0, value=0;

    public:
        void input(){
            cout<<"enter  X : ";
            cin>>x;

            cout<<"enter Y : ";
            cin>>y;
        }
        dist calculate(dist &ob1, dist &ob2){

            dist ob4;

            ob4.value = sqrt(((ob1.x+ob2.x)(ob1.x+ob2.x)) - ((ob1.y+ob2.y)(ob1.y+ob2.y)));


            return ob4; 

        }

          void output(){
            cout<<"sum : "<<value<<endl;
        }  
};
int main()
{
    dist d1, d2, d3;

    d1.input();
    d2.input();

    d3 = d3.calculate(d1, d2);
    d3.output();


    return 0;
}