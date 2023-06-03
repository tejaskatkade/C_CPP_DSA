//Nested structure.

    

#include<stdio.h>
#include<string.h>

struct movieInfo{
    char actor[10];
    float imdb;
};

struct movie{
    char mName[20];
    struct movieInfo obj1; //here object won't get memory
};

void main()
{
    //method 2:
    struct movie obj2 ={"RamSetu",{"Akshay",7.8}};

    puts(obj2.mName);  //printf("%s\n",obj2.mName);
    puts(obj2.obj1.actor);
    printf("%.1f\n",obj2.obj1.imdb);
    
}
