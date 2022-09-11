#include <iostream>
using namespace std;
class feetinch
{
public:
    int feet;
    int inch;
    feetinch()
    {
        cout << "Enter feet" << endl;
        cin >> feet;
        cout << "Enter inch" << endl;
        cin >> inch;
        update();
    }
    void update()
    {
        while (inch >= 12)
        {
            feet++;
            inch = inch - 12;
        }
    }
    void compare(feetinch &ob)
    {
        
        if (feet < ob.feet)
        {
            cout << "m1 > m2\n";
        }
        else if (feet > ob.feet)
        {
            cout << "m1 < m2\n";
        }
        else
        {
            if (inch < ob.inch)
            {
                cout << "m1 > m2\n";
            }
            else if (inch > ob.inch)
            {
                cout << "m1 < m2\n";
            }
            else
                cout << "m1 = m2\n";
        }
    }
};
class metercentimeter
{
public:
    int met;
    int cen;
    metercentimeter()
    {
        cout << "Enter meter" << endl;
        cin >> met;
        cout << "Enter centimert" << endl;
        cin >> cen;
        update();
    }
    void update()
    {
        while (cen >= 100)
        {
            met++;
            cen = cen - 100;
        }
    }
    void compare(metercentimeter &ob)
    {
        
        if (met < ob.met)
        {
            cout << "m1 > m2\n";
        }
        else if (met > ob.met)
        {
            cout << "m1 < m2\n";
        }
        else
        {
            if (cen < ob.cen)
            {
                cout << "m1 > m2\n";
            }
            else if (cen > ob.cen)
            {
                cout << "m1 < m2\n";
            }
            else
            {
                cout << "m1 = m2\n";
            }
        }
    }
};
int main()
{
    feetinch ob1;
    feetinch ob2;
    ob2.compare(ob1);
    metercentimeter ob, ob0;
    ob0.compare(ob);
    return 0;
}