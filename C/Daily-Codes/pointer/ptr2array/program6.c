#include<stdio.h>


void main(){

	int arr1[3]={10,20,30};
	int arr2[3]={40,50,60};

    int (*ptr1)[3]=&arr1;
    int (*ptr2)[3]=&arr2;

    int arr3[2]={**ptr1, **ptr2};

    // for(int i=0; i<2; i++){    
        
    //     printf(" %d ",arr3[i]);
        
    // }

	 


	 
}