#include<stdio.h>
void main(){
	char arr[10];
	printf("Enter player name\n");
	gets(arr);
	puts(arr);
}

/*
Enter player name
Tejas Katkade
Tejas Katkade
*** stack smashing detected ***: terminated
Aborted
*/
