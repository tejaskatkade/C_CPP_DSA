//28-09-22

#include<stdio.h>
void fun(int x,int y);
void main(){
    int x, y;
    printf("Enter value\n");
    scanf("%d %d",&x,&y);
    fun(x,y);
}
void fun(int x, int y) // In parametr data is copied from right to left 
                        //(similar to comma operator).
{
    printf("%d\n",x+y);
    
    printf("%p\n",&y); //Here, y gets space on memory (addres) first then x gets space.   
    printf("%p\n",&x); 
}

//Enter value
// 2 4
// 6
// 0x7ffe338a94e8
// 0x7ffe338a94ec