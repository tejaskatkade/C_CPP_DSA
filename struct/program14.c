//Nested structure.
   
     

#include<stdio.h>
#include<string.h>
   //Type A : Writing structure
struct movieInfo{
    char actor[10];
    float imdb;
};

struct movie{
    char mName[20];
    struct movieInfo obj1; //here object won't get memory
};

void main(){

    //method 1:
    struct movie obj2;   //here obj2 get memory and after that obj1 get memory

    strcpy(obj2.mName,"Kantara");
    strcpy(obj2.obj1.actor,"Rishab");
    obj2.obj1.imdb=9.8;

    puts(obj2.mName);  //printf("%s\n",obj2.mName);
    puts(obj2.obj1.actor);
    printf("%f\n",obj2.obj1.imdb);
}