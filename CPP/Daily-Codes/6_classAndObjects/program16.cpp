// Constructor

#include<iostream>

class Demo{

	public:
		Demo(){
			std::cout<<"Constructor"<<std::endl;
			std::cout<<this<<std::endl;
		}
};
int main(){
	Demo obj;  // calls constructor 
	std::cout<<&obj<<std::endl;
	return 0;
}
