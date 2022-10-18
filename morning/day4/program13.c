#include<stdio.h>
void main()
{ 
	int start;
	int end;
	
	printf("Enter the start :\n");
	Scanf("%d",&start);
	printf("Enter the end :\n");
	Scanf("%d",&end);
	
	int store=1;
	int num = end - start;
	for(int i=0; i<=num; i++){
		while(start>=1){
			store= store*start;
			start--;
		}
		printf("Factorial of %d is %d: \n",i is )
	}
	
	printf("Factorial is :%d\n",store);
	
}
