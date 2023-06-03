//15-12-22 

#include<stdio.h>

int top;
int arr[5];

void push(int data){
    top++;
    arr[top] = data;
}
void main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    for(int i = top; i >0; i--){
        printf("%d\n",arr[i]);
    }
    
}