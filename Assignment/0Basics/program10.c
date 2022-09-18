//program to find that letter is in uppercase or lowercase

#include <stdio.h>
void main(){
    char var;
    printf("Enter any character\n");
    scanf("%c",&var);
    
    
    if(var =='A' || var =='E'  || var =='I' || var =='O' || var =='U' ||var =='a' || var =='e'  || var =='i' || var =='o' || var =='u'  ){
        printf("%c is a vowel\n ",var);
    }
    else{
        printf("%c is a consonant\n ",var);
    }
}