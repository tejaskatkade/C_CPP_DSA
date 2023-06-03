//STRING INPUT

#include<stdio.h>
void main(){
	char name[20];

	printf("Enter the string\n");
	//scanf("%s",name);
	scanf("%[^\n]",name); //Read until it gets '\n'
	printf("%s\n",name);
}
