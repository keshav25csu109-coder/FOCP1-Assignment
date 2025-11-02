#include<stdio.h>
int main (){
    int a , b=0 ;
    printf("Enter total number of elements : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are : ");
    for(int i = 0 ; i<a ; i+=1){
        for(int j = i+1 ; j<a ; j+=1){
            if(arr[i]==arr[j]){
                int flag=0;
                for(int k = 0 ; k<i ; k+=1){
                    if(arr[k]==arr[i]){
                        flag=1;
                        break;
                    }
                }
if(flag==0){
                    printf("%d ",arr[i]);
                    b=1;
                }
                break;
            }
        }
    }
    if(b==0){
        printf("-1");
    }
    return 0;
}
