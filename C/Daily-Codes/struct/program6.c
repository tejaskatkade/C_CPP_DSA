//assignment

#include<stdio.h>
#include<string.h>
struct picnic{
  
    char location[20];
	int count;
    float distance; 
};

void main()
{

	//method

	//1. Object initialization
	struct picnic obj1 = {"Goa",5,460.50};
    
	//2. object assignment
	struct picnic obj2;

	//obj2.location = "Kashmir";  //error: assignment to expression with array type
	strcpy(obj2.location,"Kashmir");
	
	obj2.count = 2;
	obj2.distance = 1200.50;

    printf("%s\n",obj1.location);
    printf("%d\n",obj1.count);
    printf("%f\n",obj1.distance);

	printf("%s\n",obj2.location);
    printf("%d\n",obj2.count);
    printf("%f\n",obj2.distance);
   


}
