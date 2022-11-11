//Structure

#include<stdio.h>

struct crickPlayer{
    int jerNo;
    float avg;
    char grade;
    
};

void main()
{
    struct crickPlayer vk;
    printf("%ld\n",sizeof(vk));                     //12
    printf("%ld\n",sizeof(struct crickPlayer));     //12

}