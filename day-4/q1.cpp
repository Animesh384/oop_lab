#include<iostream>
#include<math.h>
using namespace std;
class area_ploygon{
    public:
        int area(int r){
            return 3.14*r*r;
        }
        int area(int l,int b){
            return l*b;
        }
        int area(int s1,int s2,int s3){
            int s=(s1+s2+s3)/2;
            return sqrt(s*(s-s1)*(s-s2)*(s-s3));
        }
};
int main(){
    int var1,var2,var3;
    int flag=99;
    area_ploygon ob;
    while(flag){
        printf("Enter 1 for area of circule\nEnter 2 for area of rectangle\nEnter 3 for area of triangle\nEnter 0 for exit\n");
        scanf("%d",&flag);
        switch(flag){
            case 0:
                break;
            case 1:
                printf("enter radious:");
                scanf("%d",&var1);
                printf("%d\n",ob.area(var1));
                break;
            case 2:
                printf("Enter length and breath:");
                scanf("%d %d",&var1,&var2);
                printf("%d\n",ob.area(var1,var2));
                break;
            case 3:
                printf("Enter three side of triangle:");
                scanf("%d %d %d",&var1,&var2,&var3);
                printf("%d\n",ob.area(var1,var2,var3));
                break;
            default:
                printf("Enter worng choice\n");
                break;
        }
    }
    return 0;
}
