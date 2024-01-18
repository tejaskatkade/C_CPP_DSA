// Copy Constructor
// Bydefault copy constructor is available

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

	return 0;
}
