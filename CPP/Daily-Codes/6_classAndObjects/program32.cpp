// delete[]

#include<iostream>

class Demo{

	int* ptr = NULL;

	public:
		Demo(){
			ptr = new int[50];  // Array 
			std::cout<<"constructor"<<std::endl;
		}
		~Demo(){
			delete[] ptr;  // Array 
			std::cout<<"destructor"<<std::endl;
		}

}; 

int main(){

	std::cout<<"start"<<std::endl;
	{
		
		Demo obj1;

	}
	std::cout<<"End"<<std::endl;

	return 0;
}
