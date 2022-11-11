// important !

#include<stdio.h>
void funarr(int* x){

	printf("%p\n",x);
}
void ptrarr(int (*ptr)[4]){

	printf("%p\n",ptr);
	printf("%d\n",**ptr);
}
void main()
{
	int arr[]={10,20,30,40};
	funarr(arr);
	//funarr(&arr);//warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int *’
	             //warning: passing argument 1 of ‘funarr’ from incompatible pointer type
	funarr(&arr[0]);
	printf("\n\n");
 	//ptrarr(arr);   //warning
	ptrarr(&arr);
}
// output:
//0x7ffcf460d0f0
//0x7ffcf460d0f0
//
//
//0x7ffcf460d0f0
//10

