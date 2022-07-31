#include<stdio.h>
int result;
int add(int x,int y){
    result=x+y;
    return result;
}
int sub(int x,int y){
    result=x-y;
    return result;
}
int mul(int x,int y){
    result=x*y;
    return result;
} 
int main(){
    printf("addition=%d\n",add(3,6));
    printf("subtraction=%d\n",sub(3,6));
    printf("mutiplication=%d\n",mul(3,6)); 
}