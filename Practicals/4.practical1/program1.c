//1.WAP to find the sum of the numbers that are not divisible by 3 upto the given range
#include <stdio.h>
void main(){
        int i;
        int num;
        int sum = 0;
        printf("Enter the Endnum\n");
        scanf("%d",&num);
       
        for(i=1; i<=num;i++){
	
        
                if(i%3!=0){
           	//printf("%d",i);
		sum = sum + i;
               }
				
        }printf("%d\n",sum);
}