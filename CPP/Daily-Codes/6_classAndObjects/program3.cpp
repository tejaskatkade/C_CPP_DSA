//In cpp by default constructor is public (constructor written by compiler)
//If constructor is private we cann't create an object;
#include<iostream>
class Demo{

	int x = 10;
	int y = 20;
	 
	public:
	Demo(){
	
		std::cout<<"In constructor"<<std::endl;
	
	}
	void fun(){
	
		std::cout << x<< std::endl;
		std::cout << y<< std::endl;
	}

};
int main(){

	Demo obj;
	obj.fun();

	return 0;
}

// In constructor
// 10
// 20
