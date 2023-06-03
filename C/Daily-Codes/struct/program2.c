//Structure

#include<stdio.h>
#pragma pack(1)  //preprocessor directive

struct crickPlayer{
    int jerNo;
    float avg;
    char grade;
    
};

void main()
{
    struct crickPlayer vk;
    printf("%ld\n",sizeof(vk));                     //9
    printf("%ld\n",sizeof(struct crickPlayer));     //9

}