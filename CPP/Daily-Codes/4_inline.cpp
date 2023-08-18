// Inline function
//
// some times without pushin stack frame of function compiler dumps code similar to preprocessing

#include<iostream>

#define sum(x,y) x+y 


int main(){

	int x = 10;
	int y = 30;

	std::cout <<sum(x,y)<<std::endl;

	return 0;
}
