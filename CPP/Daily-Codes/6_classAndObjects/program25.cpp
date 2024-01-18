

#include<iostream>

class Demo{

	int x = 10;
	int y = 20;

	public:
	Demo(){
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;

	}
	Demo(int x, int y){

		this->x = x;
		this->y = y;
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;

	}
	void info(Demo obj){
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
//o/p
// 10
// 20
// 100
// 200
// 100200
// 1020
