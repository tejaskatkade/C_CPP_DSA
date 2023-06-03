#include<stdio.h>

void printstr1(char arr[]){
	puts(arr);
}
void printstr2(char *arr){
	puts(arr);
}

void main(){
	char arr[20];
	printf("Enter Name\n");
	gets(arr);
	printstr1(arr);
	printstr2(arr);

}
