#include<stdio.h>
void main(){
	int arr1[]={10,20,30,40,50};
	int arr2[]={60,70,80,90,100};
	
	int *ptr1 = arr1;
	//int *ptr5 = arr1;

	int *ptr2 = &(arr1[0]);
	int *ptr3 = &(arr1[1]);
	printf("ptr1 = %p\n",ptr1);  //0X100
	printf("ptr2 = %p\n",ptr2);  //0X100
	printf("ptr3 = %p\n",ptr3);  //0X104

	//int **ptr4 = &arr1;

	ptr1++;
	ptr2++;

	printf("%d\n",*ptr1); //20
	printf("%d\n",*ptr2); //20
	//printf("%d\n",**ptr4);

}
