//WAP to print the factorial of each number present in an array. Try pointers relation with multidemensional array

#include<stdio.h>
void main(){
	int s;
	printf("Enter the array size:\n");
	scanf("%d",&s);
	int arr[s];


	printf("Enter the array element:\n");

	for(int i=0; i<s; i++){
		scanf("%d",&arr[i]);
	}

	int fact,num;
	for(int i=0; i<4; i++){
		num=arr[i];
		fact=1;
		int j=1;
		while(j<=num){
			fact=fact*j;
			j++;
		}
		printf("Factorial of %d is %d :\n",arr[i],fact);
	
	}



	/*while(num>1){
		fact=fact*num;
		num--;
	}*/

}
