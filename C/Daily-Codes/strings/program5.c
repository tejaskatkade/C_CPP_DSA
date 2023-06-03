#include<stdio.h>
 void main(){ 	
	char pname[]={'T','e','j','a','s','\0','k','a','t'};  //stores in main stack
	char *name = "Virat";  //store in ROData (Read Only Data)

	printf("%ld\n",sizeof(pname));  //9
	puts(pname);  //it prints upto '\0'

	for(int i=0; i<7; i++){
		printf("%c ",pname[i]);
	}
	printf("\n");
	puts(name);
	/*for(int i=0; i<5; i++){
		//printf("%c ",name);
		printf("%c ",*(name+i));
	}
	*/
 }
