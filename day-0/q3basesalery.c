#include<stdio.h>
#include<stdlib.h>
struct emp{
    int id;
    char name[10];
    int age;
    float bsalary;
};
int main(){
    int n;
    printf("enter a number employ:");
    scanf("%d",&n);
   struct emp* employd=(struct emp*)malloc(n*sizeof(struct emp));
   printf("id \t name \t age \t bsalary\n");
   for (int i = 0; i < n; i++)
   {
    //scanf("%s",employd[])
    scanf("%d %s %d %f",&employd[i].id,&employd[i].name,&employd[i].age,&employd[i].bsalary);
    
   }
   float gs;
   printf("id \t name \t age \t gross salary\n");
   for (int i = 0; i < n; i++)
   {
    
    gs=(employd+i)->bsalary+(employd+i)->bsalary*0.8+(employd+i)->bsalary*0.1;
    printf("\n%d\t %s \t%d\t %.2f",(employd+i)->id,(employd+i)->name,(employd+i)->age,gs);
   }

   
}