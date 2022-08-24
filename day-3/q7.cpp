#include <iostream>
#include <string.h>
using namespace std;

class employee
{
    int id, age, basic_salary;
    string name;
    float da, hra, gs;

public:
    void input()
    {

        cout << "enter a name of emp ";
        cin >> name;

        cout << "enter a id ";
        cin >> id;

        cout << "enter age ";
        cin >> age;

        cout << "enter base salary ";
        cin >> basic_salary;
    }

    float calculate()
    {
        da = 0.8 * basic_salary;
        hra = 0.1 * basic_salary;
        gs = basic_salary + da + hra;

        cout<<"da : "<<da<<endl;
        cout<<"hra : "<<hra<<endl;
        cout<<"G.R : "<<gs<<endl;
    }
};
int main()
{
    int n;
    cin>>n;

    employee e[n];

    for(int i=0; i<n; i++){
        e[i].input();
    }

    for(int i=0; i<n; i++){
        e[i].calculate();
    }


    return 0;
}