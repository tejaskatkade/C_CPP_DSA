#include<stdio.h>
void main()
{
	int r;
	printf("Enter row:\n");
	scanf("%d",&r);

	int num;
	char ch;
	for(int i=1; i<=r; i++){
		num=1;ch='a';
		for(int j=1; j<=r; j++){
			if(j<=r-i){
				printf("\t");	
			}else{
				if(num%2==1){
					printf("%d\t",num);
					num++;
				}
				else{
					printf("%c\t",ch);
					
				}	
		
			ch++;
			}
		}
		printf("\n");
	}
}
