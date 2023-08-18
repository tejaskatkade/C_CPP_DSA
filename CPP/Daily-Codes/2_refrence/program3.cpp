#include<iostream>
int main(){
	int x = 10;
        int y = 20;	
	
	std::cout<<x<<std::endl;  // 10
	std::cout<<y<<std::endl;  // 20
	
	
	int * const ptr = &x;	// ptr constant.
	std::cout<<*ptr<<std::endl;  //10

	//ptr = &y;
	//error: assignment of read-only variable ‘ptr’

	const int *ptr1 = &y; 
	y = 30;
	std::cout<<y<<std::endl;

}
