//WAP which takes a no. as input from user if no. is even print that no in reverse order to 1 and if the no is odd print that no in reverse order by diff. two to 1
#include <stdio.h>
void main(){
    int num;

    printf("Enter the number\n");
    scanf("%d",&num);

    if(num%2==0){
        while(num>=1){
            printf("%d\t",num);
            num--;
        }
    }else{
        while(num>=1){
            printf("%d\t",num);
            num=num-2;
        }
    }

}