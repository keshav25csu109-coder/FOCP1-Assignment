#include<stdio.h>
int main (){
    int a ;
    printf("Enter total number of elements : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int last = arr[a-1];
    for(int i = a-1 ; i>0 ; i-=1){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    printf("Array after cyclic rotation : ");
    for(int i = 0 ; i<a ; i+=1){
        printf("%d ",arr[i]);
}
    return 0;
}
