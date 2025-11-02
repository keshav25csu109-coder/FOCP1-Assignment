#include<stdio.h>
int main (){
    int a , b , result ;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    result = a + (~b + 1);
    printf("Subtraction of %d and %d is %d",a,b,result);
    return 0;
}

