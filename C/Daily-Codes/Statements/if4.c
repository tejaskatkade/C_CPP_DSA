#include <stdio.h>
void main(){
    int x = 10;
    char ch1 = 'A';
    char ch2 = 97;  // it is c (ASCII value of c is 97) so, 97 as character is c
    char ch3 = 321;  //warning will be given
    
    printf("%d\n",x);
    printf("%c\n",ch1);
    printf("%c\n",ch2);
    printf("%c\n",ch3);


}