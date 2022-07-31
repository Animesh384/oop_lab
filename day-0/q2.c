#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10];
    int rollno;
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

};
void pecentandtotalmarks(struct student* stun,int n){
    float p,t;
    for(int i=0;i<n;i++){
        //printf("%d ..  \n",(stun+i)->sub2);
        t=(stun+i)->sub1+(stun+i)->sub2+(stun+i)->sub3+(stun+i)->sub4+(stun+i)->sub5;
        p=t/5;
        printf("%s total marks obtain:%.2f, pecentage:%.2f\n",(stun+i)->name,t,p);
    }
}
void display(struct student* stun,int n){
    for(int i=0;i<n;i++){
        printf("%s %d\n",stun[i].name,stun[i].rollno);
    }
}
void displayforrange(struct student* stun,int n,int u,int l){
     int p,t;
    for(int i=0;i<n;i++){
        //printf("%d ..  \n",(stun+i)->sub2);
        t=(stun+i)->sub1+(stun+i)->sub2+(stun+i)->sub3+(stun+i)->sub4+(stun+i)->sub5;
        p=t/5;
        if(p<u&&p>l)
        printf("w%s total marks obtain:%d, pecentage:%d\n",(stun+i)->name,t,p);
    }
}
int pecentage(struct student* stun){
     int t,p;
     t=stun->sub1+stun->sub2+stun->sub3+stun->sub4+stun->sub5;
     p=t/5;
     return p;
}
void shortt(struct student* stun,int n){
    int min;
    struct student* temp;
    struct student temp2;
    for(int i=0;i<n-1;i++){
        temp=stun+i;
        min=-1;
        for(int j=i+1;j<n;j++){

            if(pecentage(temp)>pecentage(stun+j)){
                temp=stun+j;
                temp2=*temp;
                min=j;
            }
    }
    if(min!=-1){
    *(stun+min)=*(stun+i);
    *(stun+i)=temp2;
   //printf("%skkkkkkkk",temp->name);
    }
}
}
void displayforrollno(struct student *stun,int n,int rollno){
    for(int i=0;i<n;i++){
        if((stun+i)->rollno==rollno){
            printf("%s %d\n",stun[i].name,stun[i].rollno);
        }
    }
}
int main(){
    
    int n;
   // printf("enter values name,rollno,sub1,sub2,sub3,sub4,sub5:");
    
    printf("enter a nuber of student:");
    scanf("%d",&n);
    struct student *stun=(struct student*)malloc(n*sizeof(struct student));
    printf("enter values name   rollno,sub1,sub2,sub3,sub4,sub5:\n");
    //printf("\t-->");
    for(int i=0;i<n;i++){
        //scanf("%s",&stun[i].name);
        scanf("%s %d,%d,%d,%d,%d,%d",&stun[i].name,&stun[i].rollno,&stun[i].sub1,&stun[i].sub2,&stun[i].sub3,&stun[i].sub4,&stun[i].sub5);
    }
    printf("---------calculating total marks and percentage---------\n");
    pecentandtotalmarks(stun,n);
    //display(stun,n);
    printf("----------displaying for range----------\n");
    int h,l;
    printf("enter h l\n");
    scanf("%d %d",&h,&l);
    displayforrange(stun,n,h,l);
    printf("-----------shorting--------------\n");
    shortt(stun,n);
    display(stun,n);
   // printf("-----------displaying for given rollno---------");

}