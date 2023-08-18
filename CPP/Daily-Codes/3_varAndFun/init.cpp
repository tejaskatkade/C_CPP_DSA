#include<iostream>
int main(){

	int  x = 10; // value initialization
	int y(20);   // direct initializaton
	int z{30};   // list initialization
	     // brace initialization
	     // uniform initialization

	std::cout<<"x = "<<x<<std::endl;
	std::cout<<"y = "<<y<<std::endl;
	std::cout<<"z = "<<z<<std::endl;
	return 0;
}
