
#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10];
    int rollno,*sub;
};
void display(struct student* s,int n){
    int total=0;
    for(int i=0;i<n;i++){
        printf("name:%s rollno:%d",s[i].name,s[i].rollno);
        for(int j=0;j<5;j++){
            total=total+*((s+i)->sub+j);
        }
        printf(" total:%d\n",total);
    }
}
int main(){
    printf("enter a number of student:");
    int n;
    scanf("%d",&n);
    struct student* s=(struct student*)malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++){
        scanf("%s %d",s[i].name,&s[i].rollno);
        s[i].sub=(int*)malloc(5*sizeof(int));
        for(int j=0;j<5;j++){
            printf("sub%d:",j+1);
            scanf("%d",((s+i)->sub)+j);
        }
    }
    display(s,n);
}
//for refrence
    /* for(int i=0;i<n;i++){
        scanf("%s %d",s[i].name,&s[i].rollno);
        printf("%s %d\n",s[i].name,s[i].rollno);
    } */

