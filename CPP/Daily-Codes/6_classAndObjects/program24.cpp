// Default parameters in cpp

#include<iostream>
class Demo{

	int x = 10;
	int y = 20;
	
	public:
		Demo(){
		
			std::cout<<"NO arg"<<std::endl;
		}
		Demo(int x = 50, int y = 30){
		
			std::cout<<"Parameterized"<<std::endl;
			std::cout<<"x :"<<x<<std::endl;
			std::cout<<"y :"<<y<<std::endl;

		}
};
int main(){
	Demo obj(100);  
	return 0;
}
// Parameterized
// x :100
// y :30
