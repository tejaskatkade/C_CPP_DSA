#include<stdio.h>
void main()
{

	double x=30.50;
	char y='A';

	double *ptr1 =&x;
	char *ptr2 =&y;

	printf("%lf",x);
	printf("%c\n",y);

		
	printf("%lf\n",*ptr1);
	printf("%c\n",*ptr2);





}
