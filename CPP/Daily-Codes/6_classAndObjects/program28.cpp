#include<iostream>

class Demo{
	public:
	Demo(){
		std::cout<<"Constructor"<<std::endl;
	}
	Demo(Demo& ref){
		std::cout<<"Calling copy constructor"<<std::endl;
	}
};

int main(){

	Demo obj1;
	Demo obj2;
	Demo obj3;

	Demo arr[] = {obj1, obj2, obj3}; // calls copy constructor 3 times


//	Demo arr[3];  // calls constructor 3 times

//	arr[0] = obj1;  // No calling
//	arr[1] = obj2;
//	arr[2] = obj3;

	return 0;
}
