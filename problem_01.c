#include<stdio.h>

int add(int a,int b){
    return a+b;
}
int main(void){
    int a,b;

    printf("Kindly Enter value of a and b to add them : ");
    scanf("%d %d",&a,&b);

    printf("Addition of %d and %d is : %d\n",a,b,add(a,b));

    return 0;
}