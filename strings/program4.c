#include<stdio.h>
 void main(){
 	char pname[]={'T','e','j','a','s'};
	char *name = "Virat";

	for(int i=0; i<5; i++){
		printf("%c ",pname[i]);
	}

	for(int i=0; i<5; i++){
		//printf("%c ",name);
		printf("%c ",*(name+i));
	}
 }
