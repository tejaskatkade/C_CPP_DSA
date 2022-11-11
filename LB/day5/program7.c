//7. Enter the row

//                       A
//                  b    a
//             C    E    G
//        d    c    b    a
//   E    G    I    K    M
#include<stdio.h>
void main(){
	int row;
	printf("Enter the row\n");
	scanf("%d",&row);
	char ch;

	for(int i=1; i<=row; i++)
	{	
		ch=64+i;	
		for(int j=1; j<=row; j++)
		{
			if(j>row-(i))
			{
				if(i%2==1){
					printf("  %c  ",ch);
					ch=ch+2;
				}else{
					printf("  %c  ",ch+32);
					ch--;
				}
			}else{
				printf("     ");
			}
		}
		printf("\n");
	}
}
