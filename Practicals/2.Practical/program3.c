//wap to print the min no.
#include<stdio.h>
void main(){
        int a,b,c;
        printf("enter a : ");
        scanf("%d",&a);

        printf("Enter b : ");
        scanf("%d",&b);

        printf("Enter c : ");
        scanf("%d",&c);

        if(a<b){

                if(b<c){
                        printf("%d is smaller",a);
                }
        }else{
                if(b<c){
                        printf("%d is smaller",b);
                }else{
                        printf("%d is smaller",c);
                }

        }

}