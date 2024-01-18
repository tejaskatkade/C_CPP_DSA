// Constant Objects:
//
// If object of an class is constant then all the member funtions need to make constant.
// 
// All dependencies to change in object via member function are removed by making it costant.

#include<iostream>

class Demo{
	public:
		int x =10;
		Demo(){
		
			this->x =  80;    //constructor has privileges
		       		//	as it is use to initialise the instance variables
			std::cout << "In constructor"<<std::endl;
		}
		void getData() const{  // here the function is constant.
		
			std::cout<<x<<std::endl;
		//	x = 100;   // error: assignment of member ‘Demo::x’ in read-only object
		}

};

int main(){

	const Demo obj;
	std::cout<<obj.x<<std::endl; 
	obj.getData();
	return 0;	
}

