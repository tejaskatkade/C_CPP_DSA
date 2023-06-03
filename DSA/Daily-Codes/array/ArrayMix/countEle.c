// count of element

//count the no. of element that have at least 1 element greater than  itself


#include<stdio.h>
void main(){
	int arr[]={2,4,5,6,6,4,3,2,5,7,7};
	int flag = 0;
	int count =0;
	for(int i=0; i<11; i++){
		int num = arr[i];	
		for(int j=0; j<11;j++){
			
			if(num<arr[j]){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
		
			count++;
			flag =0;
		}
	}
	printf("count is %d\n",count);
}
