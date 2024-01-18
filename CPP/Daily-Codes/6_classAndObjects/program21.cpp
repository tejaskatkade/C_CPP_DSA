// Copy Constructor


#include<iostream>

class Demo{

	public:
		Demo(){
			Demo obj2(10);
			Demo obj3(obj2);
			std::cout <<"No arg constructor"<<std::endl;
		}
		Demo(int x){
			// this() // Error: as cpp has copy constructor
			std::cout<<"Parameterized"<<std::endl;
			std::cout<<x<<std::endl;
		}
		Demo(Demo &xyz){
			std::cout<<"Copy constructor"<<std::endl;

		}

};
int main(){

	Demo obj1;
	return 0;
}
