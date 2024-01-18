// Destructor
// when scope get finishes it calls destrucor
//
// But data on heap section doesnot get free.

#include<iostream>

class Demo{

	public:
		Demo(){
			std::cout<<"constructor"<<std::endl;
		}
		~Demo(){
			std::cout<<"Destructor"<<std::endl;
		}
};
int main(){
	std::cout<<"Main"<<std::endl;

	Demo obj1;
	Demo *obj2 = new Demo();

	std::cout<<"End Main"<<std::endl;
	delete obj2;
return 0;
}
