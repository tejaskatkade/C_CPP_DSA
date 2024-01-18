#include<iostream>

class Demo{

	public:
		Demo(){
		
			std::cout<<"No-arg constructor"<<std::endl;
		}
		Demo(int x){
			std::cout<<"Parameterized Constructor"<<std::endl;
			std::cout<<x<<std::endl;
			std::cout<<this<<std::endl;
		}
};
int main(){

	Demo obj1; 
	Demo *obj2 = new Demo();

	Demo obj3(10);
	std::cout<<&obj3<<std::endl;

	Demo *obj4 = new Demo(20);
	std::cout<<obj4<<std::endl;

	//Demo obj5();  // Similar to Normal function
	Demo obj6{};    // call No arg constructor
	return 0;
}
