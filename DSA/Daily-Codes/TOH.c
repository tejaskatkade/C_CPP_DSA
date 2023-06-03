#include<stdio.h>

void TOH(int N,char A,char B,char C){	
	if(N>0){
	
		
		TOH(N-1,A,C,B);
		printf("%c -> %c \n",A,C);	
		TOH(N-1,B,A,C);
		
	}
}

void main(){

	int N=4;

	TOH(N,'A','B','C');
}
