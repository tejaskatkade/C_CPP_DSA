#include<iostream>

class Demo{

	int x = 10;

	public:
	int y = 20;

	protected:
	int z = 30;

};
void main(){

	//std::cout<<x<<y<<z<<std::endl;  	//error: ‘x’ was not declared in this scope
						//error: ‘y’ was not declared in this scope
						//error: ‘z’ was not declared in this scope

	Demo obj;
	std::cout<<obj.x<<obj.y<<obj.z<<std::endl;  //  error: ‘int Demo::x’ is private within this context
      						    // error: ‘int Demo::z’ is protected within this context	
	return 0;
}
