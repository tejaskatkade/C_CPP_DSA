// Object Creation

#include<iostream>
class Demo{

	int x = 10;
	int y = 20;
	 
	public:
	Demo(){
	
		std::cout<<"In constructor"<<std::endl;
	
	}
	void fun(){
	
		std::cout << x<< std::endl;  // 10
		std::cout << y<< std::endl;  // 20
	}

};
int main(){

	Demo obj1;                // Created on stack
				  // . is use to access
	Demo *obj2 = new Demo();  // Created on Heap
				  // new is used
				  // -> is use to access
	obj1.fun();  // In constructor
	obj2->fun(); // In constructor

	delete obj2;

	return 0;
}

// In constructor
// In constructor
// 10
// 20
// 10
// 20
