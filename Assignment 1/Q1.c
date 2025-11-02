#include<stdio.h>
#include<math.h>
int main (){
    int num , digit , sum = 0 , abc ;
    printf("Enter any number : ");
    scanf("%d",&num);
    abc = num;
    while(abc>0){
        digit = abc % 10;
        sum = sum + pow(digit,3);
        abc = abc / 10;
    }
    if(sum == num){
        printf("%d is an Armstrong number",num);
    }
    else{
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}
