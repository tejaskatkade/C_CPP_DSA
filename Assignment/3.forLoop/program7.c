//7. WAP to calculate the LCM of the given two numbers

#include<stdio.h>
void main(){
    int fNum;
    int sNum;
    int i;
    int start;
    
    printf("Enter the two numbers: \n");
    scanf("%d", &fNum);
    scanf("%d", &sNum);

    // for(i = 1; i <= fNum*sNum; i++){
    //     if(i%fNum==0 && i%sNum==0){
    //         break;
    //     }

        
    // }
    // printf("The LCM is %d ",i);


    if(fNum>sNum){
        start = fNum;
    }else{
        start = sNum;
    }

    for(i = start; i <= fNum*sNum; i=i+start){
        if(i%fNum==0 && i%sNum==0){
            break;
        }

        
    }
    printf("The LCM is %d ",i);

    

}