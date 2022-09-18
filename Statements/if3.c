#include<stdio.h>
void main(){
    printf("start main \n");
    char ch1 = 'A';
    char ch2 = '48'; //warning  

    if(ch1){
        printf("In first if block\n");
    }
    if(ch2){
        printf("In Second if block\n");
    }
    printf("End main\n");
    printf("%c",ch2);
}


// start main 
// In first if block
// In Second if block
// End main
// 8     --> first it print 4 then it overwrite 8 in 4