//8. wap to take two characters if these characters are equal then print the same but if they are unequal then print their difference..

#include<stdio.h>
void main(){
    char ch1,ch2;
    printf("Enter two characters: \n");
    scanf("%c %c",&ch1,&ch2);

    if(ch1 == ch2){
        printf("Both characters are same i.e., %C \n",ch1);
    }else{
        printf("The difference between the character is %d\n",ch2-ch1);
    }
}