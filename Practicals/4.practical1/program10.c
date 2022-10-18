//fibonanci

#include<stdio.h>
void main(){
	int n1=0;
	int n2=1;
	int temp;
int num;
	printf("Enter no : ");
	scanf("%d",&num);
	while(n1<num){
		temp=n1;
		
		printf("%d",n1);
		n1=n1+n2;
		n2=temp;
			
	}
}