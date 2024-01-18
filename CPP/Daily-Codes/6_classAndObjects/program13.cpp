#include<iostream>

class Demo{

	public:
		int x = 10;
		static int y;

		void fun();
};

int Demo::y = 20;
void Demo::fun(){

	std::cout<<"x = "<<x<<std::endl;
	std::cout<<"y = "<<y<<std::endl;
}
int main(){

	Demo obj1;
	Demo obj2;

	obj1.fun();
	obj2.fun();

	obj1.x = 50;
	obj1.y = 60;
	
	obj1.fun();
	obj2.fun();

	return 0;
}

// o/p :
// x = 10
// y = 20
// x = 10
// y = 20
// x = 50
// y = 60
// x = 10
// y = 60
