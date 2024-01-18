//copy constructor
//
//whenever the data type get value then it can be a intialization

#include<iostream>

class Demo{

	int x = 10;
	int y = 20;

	public:
	Demo(){
		std::cout<<x<<y<<std::endl;
	}
	Demo(int x, int y){

		this->x = x;
		this->y = y;
	}
	Demo(Demo &obj){
		
		std::cout<<"copy"<<std::endl;

	}
	void info(Demo obj){ // calls copy constructor // Demo obj = obj1;
		std::cout<<x<<y<<std::endl;
		std::cout<<obj.x<<obj.y<<std::endl;
	}
};

int main(){

	Demo obj1;
	Demo obj2(100,200);
	obj2.info(obj1);  

	return 0;
}

