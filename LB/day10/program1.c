#include<stdio.h>
void main()
{
	int r;
	printf("Enter row:\n");
	scanf("%d",&r);

	int num=1;
	for(int i=1; i<=r; i++){
		for(int j=1; j<=i; j++){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
		num--;
	}
}
