#include<stdio.h>
#include<string.h>

void main(){
	char name[10]={'k','l','r','a','h','u','l','\0'};

	char *str = "virat kohli";

	int lenName = strlen(name);
	int lenstr = strlen(str);

	printf("%d\n",lenName);
	printf("%d\n",lenstr);


}
