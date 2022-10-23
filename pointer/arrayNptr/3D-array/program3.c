// array-ptr


#include<stdio.h>
void main()
{
	int arr1[4]={10,20,30,40};
	int arr2[4]={50,60,70,80};
	int arr3[4]={90,100,110,120};

	int* arrptr[3]={arr1,arr2,arr3};

	printf("%p\n",arr1);	
	printf("%p\n",arrptr);
	printf("%p\n",*arrptr);
	printf("%d\n",**arrptr);
}

//0x7ffcdabd5030
//0x7ffcdabd5060
//0x7ffcdabd5030
//10
