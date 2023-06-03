//10.

//  OUT PUT WILL BE
// Enter number of rows: 4
//  D4  C3  B2  A1 
//  D4  C3  B2  A1
//  D4  C3  B2  A1
//  D4  C3  B2  A1




#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        
        int num1=64+n;
        int num2=n;

        for(int j=0; j<n; j++){
            printf(" %c%d ",num1,num2);
            num1--;
            num2--;
            
        }
        
        printf("\n");
    }
}