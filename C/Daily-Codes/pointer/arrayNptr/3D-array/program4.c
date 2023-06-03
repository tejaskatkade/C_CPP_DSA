//Store an addresses of arrays as an elments of an array.


#include<stdio.h>
void main()
{
	int arr1[4]={10,20,30,40};
	int arr2[4]={50,60,70,80};
	int arr3[4]={90,100,110,120};

	//int (*ptr1[4])[3]={&arr1,&arr2,&arr3};  // warning: initialization of ‘int (*)[4][3]’ from incompatible pointer type ‘int (*)[4]’ 


	
	//int (*ptr2[3])[4]={&arr1,&arr2,&arr3};
	int (*ptr3[])[4]={&arr1,&arr2,&arr3};


	printf("%p\n",arr1);
	//printf("%p\n",arr2);
		
	printf("%p\n",ptr3);
	printf("%p\n",*ptr3);
	printf("%p\n",**ptr3);
	printf("%d\n",***ptr3);



}
//0x7ffefb81e410
//0x7ffefb81e440
//0x7ffefb81e410
//0x7ffefb81e410
//10

