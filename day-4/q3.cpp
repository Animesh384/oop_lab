#include<iostream>
using namespace std;
char ch1='*';
 class fun{
    public:
    void display(char ch=ch1,int n=80){
        for (int i = 0; i < n; i++)
        {
            printf("%c\n",ch);
        }
        
    }
 };
int main(){
    fun ob;
    int flag;
    char ch;
    do{
        printf("Enter -1 for null values or >0 for chrarecter");
        scanf("%d",&flag);
        if(flag>0){
            printf("enter charecter:");
            scanf("\n%c",&ch);
            ob.display(ch,flag);
        }
        else{
            printf("Enter 69 for charecter 0 for exit:");
            scanf("%d",&flag);
            if(flag==69){
                printf("enter charecter:");
                scanf("\n%c",&ch);
                ob.display(ch);
            }
        }
    }while(flag);
}