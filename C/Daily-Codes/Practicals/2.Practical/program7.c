//7. wap to check whether the given input is pythagoras triplet or not

#include<stdio.h>
void main(){
int a,b,c;

printf("Enter the value of hypotenous:\n");
scanf("%d",&c);

printf("Enter any 1st side:\n ");
scanf("%d",&a);

printf("Enter any 2st side:\n ");
scanf("%d",&b);

if(c*c == a*a + b*b){
	printf("%d %d and %d is pythagoras triplet",a,b,c);
}else{
	printf("%d %d and %d is not a  pythagoras triplet",a,b,c);
}
}