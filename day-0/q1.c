#include<stdio.h>
struct student{
    char name[10];
    int rollno;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

};
int main(){
    struct student std1;
    printf("enter values name,rollno,sub1,sub2,sub3,sub4,sub5:");
    scanf("%s",&std1.name);
    scanf(" %d,%d,%d,%d,%d,%d",&std1.rollno,&std1.sub1,&std1.sub2,&std1.sub3,&std1.sub4,&std1.sub5);
    printf("\nname=%s",std1.name);
    printf("\nrollno=%d",std1.rollno);
    printf("\nsub1=%d",std1.sub1);
    printf("\nsub2=%d",std1.sub2);
    printf("\nsub3=%d",std1.sub3);
    printf("\nsub4=%d",std1.sub4);
    printf("\nsub5=%d",std1.sub5);
}