

#include<stdio.h>
void main(){
	//char *str; //Segmentation fault
			//Data can't be taken at run time
	char arr[20];  //Data can be taken at run time
	char *str = arr;  //Data can be taken at run time
	printf("Enter Name\n");
	gets(str);
	puts(str);
}
