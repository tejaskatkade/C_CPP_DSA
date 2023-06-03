//8.

#include<stdio.h>
void main(){

	int r;
	printf("Enter the row\n");
	scanf("%d",&r);

	int num;
	for(int i=1; i<=r; i++){
		num=1;
		for(int j=1; j<=r; j++){
			if(j<=r-i)
				printf("\t");
			else{
				if(i%2==1)
					printf("%d\t",num);
				else{
					if(num%2==1)
						printf("%c\t",num+64);
					else
						printf("%c\t",num+96);
				}
				num++;
				
			}
		
		}
		printf("\n");
	}
}
