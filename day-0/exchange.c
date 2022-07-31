#include<stdio.h>
#include<stdlib.h>
struct emp{
    char name[20];
};
int main(){
    int n;
    printf("enter a numer:");
    scanf("%d",&n);
    //scanf("%[^\n]s",str);
    struct emp* var=(struct emp*)malloc(n*sizeof(struct emp));
    int i=1;
    scanf("%[^\n]%s",&var[i].name);
    printf("%s",var[i].name);
    var[2]=var[1];
    printf("%s",var[2].name);
}
