//5.
// D C B A
// e d c b
// F E D C
// g f e d



#include<stdio.h>
void main(){
	
	char ch1;
	char ch2;

	int num;
	printf("Enter Number of rows:\n");
	scanf("%d",&num);
	
	ch1=64+num;
	ch2=96+num+1;

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++){
			if(i%2==0){
				printf(" %c ",ch1);
				ch1--;
			
			}else{
				printf(" %c ",ch2);
				ch2--;
			}
		
		}
		if(i%2==0)
			ch1=ch1+num+2;
		else
			ch2=ch2+num+2;
		printf("\n");
	
	}
}
