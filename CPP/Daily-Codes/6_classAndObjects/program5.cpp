// In cpp Object does not get free like java

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

	Demo *obj = new Demo();  

	obj->fun(); 
	delete obj;
	obj->fun(); 

	return 0;
}

//In constructor
//10
//20
//0
//0
