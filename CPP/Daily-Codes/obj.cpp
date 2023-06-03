#include <iostream>

class Demo{

	int x = 10;
	public:

	Demo(){
		std::cout<< "IN constructor " << std::endl;
	}
	void dis(){
	
		std::cout<< x << std::endl;
	}
};

int main(){

	Demo obj;
	obj.dis();

	return 0;
}

