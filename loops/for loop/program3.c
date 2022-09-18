#include<stdio.h>
void main(){
    int startNum;
    int endNum;
    printf("Enter the star num:\n");
    scanf("%d",&startNum);
    printf("Enter the ending number: \n");
    scanf("%d",&endNum);

    for(int i=startNum; i<endNum;i++){
        printf("Learning\n");
    }
}