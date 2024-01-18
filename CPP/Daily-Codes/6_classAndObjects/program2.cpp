#include<iostream>

class Demo{

	// static is not allowed in class;
	// static cannot be initialise in class;
	int x = 10;
	//static int z = 10;  // error: ISO C++ forbids in-class initialization of non-const static member ‘Demo::z’
	static int y;
	//const static int y;	
};

int main(){

	Demo obj;
	std::cout<< obj.y <<std::endl;
	
	return 0;

}
