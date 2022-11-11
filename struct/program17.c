#include<stdio.h>
#include<string.h>

// Type B: Writing structure
struct movie {

    char mName[20];
    struct movieInfo{
        char actor[20];
        float imdb;

    }obj1;

};

void main(){
    struct movie obj2 ={"rhtdm",{"R Madhvan",8.5}};

    puts(obj2.mName);  
    puts(obj2.obj1.actor);
    printf("%.1f\n",obj2.obj1.imdb);
}