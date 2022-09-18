//8.WAP that takes angles of triangles from the user and print that triangle is valid or not

#include<stdio.h>
void main(){
	int a,b,c;

	printf("Enter angles a:\n");
	scanf("%d",&a);
	printf("Enter angles b:\n");
	scanf("%d",&b);
	printf("Enter angles a:\n");
	scanf("%d",&c);

	if(a+b+c == 180){
		printf("The triangle is valid");
		
	}else{
		printf("The triangle is not valid");
	}
	
}