//WAP that accepts a string from the user and prints the length of the string. Use mystrlen().

#include<stdio.h>

int mystrlen(char *ptr){
	int count=0;
	while(*ptr!='\0'){
		count++;
		ptr++;
	
	}
	return count;
	
}
void main(){
	char arr[2000];
	//char *arr[]={"a"};

	printf("Enter the string:\n");
	gets(arr);
	
	int len = mystrlen(arr);
	printf("The length is %d",len);

}

	//char *arr[]={"\0"};

