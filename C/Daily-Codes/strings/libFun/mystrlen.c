#include<stdio.h>

int myStrLen(char *str){
	int count = 0;
	while(*str != '\0'){
		count++;
		str++;
	}
	return count;
}

void main(){
	char name[10]={'t','e','j','a','s','\0'};

	char *str = "virat kohli";

	printf("%d\n",myStrLen(name));
	printf("%d\n",myStrLen(str));

}
