#include<stdio.h>
void main(){

    int x;
    int ans, ans1, ans2, ans3;
    
    printf("Enter the value of x : \n");
    scanf("%d",&x);

    ans = ++x + x++ + ++x ;
    printf("x = %d\n ans =%d\n",x,ans);

    ans1 = ++x + ++x + ++x + ++x ;
    printf("x = %d\n ans1 =%d\n",x,ans1);

    ans2 =  x++ +  x++ + ++x + x++ + ++x;
    printf("x = %d\n ans2 =%d\n",x,ans2);


    ans3 = x++ + x++ + x++ + x++;
    printf("x = %d\n ans3 =%d\n",x,ans3);


}