#include<iostream>

class Demo{
	int x = 10;
	static int y;

	public:
	void fun(){
	
		int a = 30;
		static int b = 40;

		std::cout<<"x = "<<x<<std::endl;
		std::cout<<"y = "<<y<<std::endl;
		std::cout<<"a = "<<a<<std::endl;
		std::cout<<"b = "<<b<<std::endl;
		//std::cout<<p<<std::endl;
		//std::cout<<q<<std::endl;

	}
	static void gun(){
	
		int p = 50;
		static int q = 60;

	//	std::cout<<x<<std::endl;     // x is non- static
		std::cout<<"y = "<<y<<std::endl;
	//	std::cout<<a<<std::endl;
		//std::cout<<b<<std::endl;
		std::cout<<"p = "<<p<<std::endl;   // Non static of same fun can works
		std::cout<<"q = "<<q<<std::endl;

	}
};
int Demo::y = 20;  // get initialize before calling main;
int main(){

	Demo obj1;
	Demo *obj2 = new Demo();

	obj1.fun();
	obj1.gun();

	obj2->fun();
	obj2->gun();
	return 0;
}
