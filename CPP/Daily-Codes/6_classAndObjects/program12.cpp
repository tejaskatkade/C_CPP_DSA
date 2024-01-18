#include<iostream>

class Demo{

	int x = 10;
	static int y;   // Only declaration is allowed
			// Definition is not allowed

	public:
	void fun();
};

int Demo::y = 20;
void Demo::fun(){

	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;

}
int main(){

	Demo obj;
	obj.fun();
}
