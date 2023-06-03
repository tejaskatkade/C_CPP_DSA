//wap that prints the addition of the all even number between given range;

#include <stdio.h>
void main(){
    int fn;
    int ln;
    int add = 0;
    printf("Enter the first number: \n");
    scanf("%d",&fn);

    printf("Enter the last number: \n");
    scanf("%d",&ln);

    for(int i=fn; i<= ln; i++){
        if(i%2==0){
           // printf("%d\n",i);
            add = add+i;
            
        }
        
    }
    printf("The addition is %d",add);
}