//fopen

#include<stdio.h>
void main()
{
	FILE *fp = fopen("a.txt","w");
	printf("%p\n",fp);

}
