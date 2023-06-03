//Structure assignment

//note: structure initialization is not possible

#include<stdio.h>

struct crickPlayer{
    char pName[20];
    int jerNO;
    float avg; 
}obj2 = {"M S Dhoni",7,45.25};

void main()
{
    struct crickPlayer obj1 = {"Virat Kohli",18,50.33f};

    printf("%s\n",obj1.pName);
    printf("%d\n",obj1.jerNO);
    printf("%f\n",obj1.avg);

    printf("%s\n",obj2.pName);
    printf("%d\n",obj2.jerNO);
    printf("%f\n",obj2.avg);


}