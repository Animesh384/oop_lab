#include<iostream>
using namespace std;
class solid_volume
{
    public:
    float volume(float);
    float volume(float,float);
    float volume(float,float,float);
};
float solid_volume::volume(float var1){
    return (float)4/3*3.14*var1*var1*var1;
}
float solid_volume::volume(float var1,float var2){
    return 3.14*var1*var1*var2;
}
float solid_volume::volume(float var1,float var2,float var3){
    return var1*var3*var2;
}
int main(){
    int flag=69;
    float var1,var2,var3;
    solid_volume ob;
    while(flag){
        printf("Enter 1 for volume of circule\nEnter 2 for volume of rectangle\nEnter 3 for volume of triangle\nEnter 0 for exit\n");
        scanf("%d",&flag);
        switch(flag){
            case 0:
                break;
            case 1:
                printf("enter radious:");
                scanf("%f",&var1);
                printf("%f\n",ob.volume(var1));
                break;
            case 2:
                printf("Enter length and radious:");
                scanf("%f %f",&var1,&var2);
                printf("%f\n",ob.volume(var1,var2));
                break;
            case 3:
                printf("Enter three side of cuboid:");
                scanf("%f %f %f",&var1,&var2,&var3);
                printf("%f\n",ob.volume(var1,var2,var3));
                break;
            default:
                printf("Enter worng choice\n");
                break;
        }
    }
    return 0;
}