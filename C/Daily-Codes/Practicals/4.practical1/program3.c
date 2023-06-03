//3. divisor and count and sum of the divisor of the entered num

#include<stdio.h>
void main(){
	int num;

	printf("Enter the num\n");
	scanf("%d",&num);

	int count = 0;
	int sum = 0;
	for(int i = 1; i<=num; i++){
		if(num%i==0){
			printf("%d\n",i);
			count = count +1;
			sum = sum + i;
		}
	}
	printf("count is : %d\n",count);
	printf("sum is : %d",sum);
}