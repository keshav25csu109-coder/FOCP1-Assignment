#include<stdio.h>
int main (){
    int n ;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i+=1){
        for(int j = 1 ; j <= i ; j+=1){
            printf("%d",j%2);
        }
        printf(" ");
        for(int j = 1 ; j <= i ; j+=1){
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}
