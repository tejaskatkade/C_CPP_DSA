#include<stdio.h>
void main()
{
	char *str ="Tejas";     //constant string

	printf("%c\n",str[2]);  //j
	str[2] = 'k';           //segmentation fault (here, we are placing data at wrong place)

}
