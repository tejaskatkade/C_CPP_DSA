// Copy Constructor
// 

#include<iostream>

class Demo{

	public:
		Demo(){
		
			std::cout <<"No arg constructor"<<std::endl;
		}
		Demo(int x){
		
			std::cout<<"Parameterized"<<std::endl;
			std::cout<<x<<std::endl;
		}
		Demo(Demo &xyz){
		
			std::cout<<"Copy constructor"<<std::endl;

		}

};
int main(){

	Demo obj1;
	Demo obj2(101);
	Demo obj3(obj1);
	Demo obj4 = obj1;
	obj3 = obj1;    // Copy constructor does not get call on object assignment
			// It get calls on initialization

	return 0;
}
