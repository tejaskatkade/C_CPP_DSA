//6.
//D e F g
//e D c B
//F g H i
//g F e D



#include<stdio.h>
void main()
{
	int num;
	int ch1;
	int ch2;
	printf("Enter number of rows:\n");
	scanf("%d",&num);

	ch1=64+num;
	//ch2=ch1+32+1;
	for(int i=0; i<num; i++){
		for(int j=0; j<num; j++){
			if(i%2==0)
			{	
				if(j%2==0)
				{
					printf(" %C ",ch1);
				}
				else
				{
					printf(" %c ",ch1+32);
				}	
				ch1++;	
			}
			else
			{
				if(j%2==0)
				{
					printf(" %c ",ch1+32);
				
				}
				else
				{
					printf(" %c ",ch1);
				}
				ch1--;
			
			
			}

		}
		printf("\n");
		if(i%2==0){
			ch1=ch1-(num-1);
		}else{
			ch1=ch1+(num+1);
		}
		
		
		
	}
	

}
