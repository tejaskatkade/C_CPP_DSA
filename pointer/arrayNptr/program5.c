//Relation between 2-D array and ptr

#include<stdio.h>
void main(){
	int arr[2][3][3]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180};

	printf("%p\n",&arr);
	printf("%p\n",arr);
	printf("%p\n",arr[0]);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0][0]);

	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<3;k++){
				printf("%d",*(*(*(arr+i)+j)+k));
			}
			printf("\n");
		}
		printf("\n\n");
	}

}

