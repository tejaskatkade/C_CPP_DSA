// WAP to print all even no. in reverse order & odd no in the standard way

#include<stdio.h>
void main(){
	int sN,eN;
	printf("Enter start num\n");
	scanf("%d",&sN);
	printf("Enter end num\n");
	scanf("%d",&eN);
	for(int i=sN; i<=eN; i++){

		if(i%2==1){
			printf("%d\t",i);

		}
	}
	printf("\n");
	for(int i=eN; i>=sN;i--){
		if(i%2==0){
			printf("%d\t",i);
					
		}
	}


}