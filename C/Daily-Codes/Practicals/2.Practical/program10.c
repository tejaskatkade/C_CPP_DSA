//10. WAP takes to characters if these characters are equal then print them as it is but if they are unequal then print their difference

#include<stdio.h>
void main(){
	char var1;
	char var2;

	printf("Enter 1st char: ");
	scanf("%c",&var1);

	printf("Enter 2nd char: ");
	scanf(" %c",&var2);

	if(var1 == var2){
		printf("var1 = %c\n var2 = %C\n",var1,var2);

	}else{
		int diff = var2 - var1;
		printf("var1 = %c\n var2 = %C\n",var1,var2);
		printf("The diff between %c and %C is %d",var1,var2,diff);
	}
}