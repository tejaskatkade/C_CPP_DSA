#include<stdio.h>
char * mystrncpy(char* dest, char* src,int n)
{
	while(=)
	{
		*dest = *src;
		dest++;
		src++;
			
	}
	*dest = '\0';
	return dest;
}
void main(){
	char *src = {"Tejas Katkade"};
	puts(src+4);
	char dest[100];
	int n=5;
	mystrncpy(dest, src,n);
	puts(src);
}
