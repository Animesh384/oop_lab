#include <iostream>
using namespace std;

class feet
{
public:
    int fe, inches;

    static void compare_feet(feet, feet);
};

class meter
{
public:
    int me, centi;

    static void compare_meter(meter a, meter b);
};

void feet::compare_feet(feet d1, feet d2)
{
    if (d1.fe > d2.fe)
    {
        printf("A is larger then B");
        return;
    }
    if (d1.fe < d2.fe)
    {
        printf("B is larger then A");
        return;
    }
    if (d1.fe == d2.fe || d1.inches > d2.inches)
    {
        printf("A is larger then B");
        return;
    }
    if (d1.fe == d2.fe || d1.inches < d2.inches)
    {
        printf("B is larger then A");
        return;
    }
}

void meter::compare_meter(meter d3, meter d4)
{
    if (d3.me > d4.me)
    {
        printf("A is larger then B");
        return;
    }
    if (d3.me < d4.me)
    {
        printf("B is larger then A");
        return;
    }
    if (d3.me == d4.me || d3.centi > d4.centi)
    {
        printf("A is larger then B");
        return;
    }
    if (d3.me == d4.me || d3.centi < d4.centi)
    {
        printf("B is larger then A");
        return;
    }
}

int main()
{
    feet d1, d2;
    meter d3, d4;

    printf("ENTER THE DETAILS FOR FIRST OBJECTS :\n");
    printf("ENTER FEET :");
    scanf("%d", &d1.fe);
    printf("ENTER THE VALUE OF INCHES :- ");
    scanf("%d", &d1.inches);

    printf("\nENTER THE DETAILS FOR FIRST OBJECTS :-\n");
    printf("ENTER THE VALUE OF FEET :- ");
    scanf("%d", &d2.fe);
    printf("ENTER THE VALUE OF INCHES :- ");
    scanf("%d", &d2.inches);

    feet::compare_feet(d1, d2);

    printf("\nENTER THE DETAILS FOR FIRST OBJECTS :-\n");
    printf("ENTER THE VALUE OF METER :- ");
    scanf("%d", &d1.fe);
    printf("ENTER THE VALUE OF CENTIMETER :- ");
    scanf("%d", &d1.inches);

    printf("\nENTER THE DETAILS FOR SECOND OBJECTS :-\n");
    printf("ENTER THE VALUE OF METER :- ");
    scanf("%d", &d2.fe);
    printf("ENTER THE VALUE OF CENTIMETER :- ");
    scanf("%d", &d2.inches);

    meter::compare_meter(d3, d4);

    return 0;
}