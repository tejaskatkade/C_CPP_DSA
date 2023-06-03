//WAP to print the first 100 number

#include<stdio.h>
void main(){

    int n;
    printf("Enter count to print\n");
    scanf("%d",&n);

    printf("Numbers from 1 to %d ",n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }


}