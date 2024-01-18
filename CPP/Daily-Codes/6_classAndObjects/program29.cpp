// two objects are created in this code

#include<iostream>

class Demo{
	public:
		int x =10;
		Demo(){
			std::cout << "In constructor"<<std::endl;
		}
		Demo(int x){

			this->x =  x; 
			std::cout << "In para constructor"<<std::endl;
			Demo(); // temporary object gets created;
		}
		
		void getData(){
		
			std::cout<<x<<std::endl;
		}
		~Demo(){
		
			std::cout<<"Destructor"<<std::endl;
		}	
};

int main(){

	Demo obj(20);
	std::cout<<obj.x<<std::endl; 
	obj.getData();
	return 0;	
}
//In para constructor
//In constructor
//Destructor
//20
//20
//Destructor
