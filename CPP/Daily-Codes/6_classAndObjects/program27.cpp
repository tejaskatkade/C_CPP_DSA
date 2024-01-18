//copy constructor
// solution

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
	void info(Demo &obj){ // no call to copy constructor as it is refrence 
		              // Demo &obj = obj1;
			      // no new object is created.

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

